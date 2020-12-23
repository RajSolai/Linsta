/*
* Copyright (c) 2020 - Today solairaj ()
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: solairaj <msraj085@gmail.com>
*/

public class Widgets.Webview : Gtk.EventBox {
    Services.Settings web_view_settings;    
    string cookie_db = Environment.get_user_cache_dir () + "/linsta/cookies/";
    public Webview(){
        make_cookie_jar();
        var web_view_context = WebKit.WebContext.get_default ();
        var web_view = new WebKit.WebView.with_context (web_view_context);
        
        var cookie_manager = web_view.web_context.get_cookie_manager ();
        cookie_manager.set_accept_policy (WebKit.CookieAcceptPolicy.ALWAYS);
        cookie_manager.set_persistent_storage(cookie_db+ "cookies.db",  WebKit.CookiePersistentStorage.SQLITE);
        
        web_view_settings = new Services.Settings ();
        web_view.set_settings (web_view_settings);
        web_view.zoom_level = 1.0;
        web_view.load_uri("https://www.instagram.com/");
        web_view.load_changed.connect((WEBKIT_LOAD_FINISHED)=>{
            loaded();
        });
        web_view.load_changed.connect((WEBKIT_LOAD_STARTED)=>{
            started();
        });
        web_view.load_changed.connect((WEBKIT_LOAD_COMMITTED)=>{
            commited();
        });
        add(web_view);
    }
    protected void make_cookie_jar(){
            var dir = GLib.File.new_for_path (cookie_db);
            if (!dir.query_exists (null)) {
                try {
                    dir.make_directory_with_parents (null);
                } catch (Error err) {
                    warning ("Could not create caching directory.");
                }
            }
    }
    public signal void loaded ();
    public signal void started ();
    public signal void commited ();
}
