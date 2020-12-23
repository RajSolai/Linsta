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

public class Application : Gtk.Application {

    Widgets.Splash splash;
    Widgets.Webview webview;
    Gtk.Stack main_stack;

    public Application () {
        Object (
            application_id: "io.github.rajsolai.linsta",
            flags: ApplicationFlags.FLAGS_NONE
        );
    }

    protected override void activate () {
        
        weak Gtk.IconTheme default_theme = Gtk.IconTheme.get_default ();
        default_theme.add_resource_path ("/io/github/rajsolai/linsta");

        // stylesheet
        var provider = new Gtk.CssProvider ();
        provider.load_from_resource ("/io/github/rajsolai/linsta/stylesheet.css");
        Gtk.StyleContext.add_provider_for_screen (Gdk.Screen.get_default (), provider, Gtk.STYLE_PROVIDER_PRIORITY_APPLICATION);
    
        var main_window = new Gtk.ApplicationWindow (this);
        splash = new Widgets.Splash();
        webview = new Widgets.Webview();
        
        main_stack = new Gtk.Stack();
        main_stack.expand = true;
        main_stack.add_named(splash,"splash_view");
        main_stack.add_named(webview,"web_view");
        
        webview.started.connect(()=>{
            main_stack.visible_child_name = "splash_view";
        });
        
        webview.commited.connect(()=>{
            main_stack.visible_child_name = "splash_view";
        });
        
        webview.loaded.connect(()=>{
            Timeout.add_seconds(5, switch_views);
            // 5 seconds of timeout keeps the white screen away
        });
        
        var header = new Gtk.HeaderBar();
        header.get_style_context().add_class("default-decoration");
        header.get_style_context().add_class("flat");
		header.set_show_close_button(true);
        
        main_window.set_titlebar(header);
        main_window.default_height = 570;
        main_window.default_width = 420;
        main_window.title = "Linsta";
        main_window.add(main_stack);
        main_window.show_all ();
    }
    
    private bool switch_views(){
        main_stack.visible_child_name = "web_view";
        return true;
    }

    public static int main (string[] args) {
        var app = new Application ();
        return app.run (args);
    }
}

