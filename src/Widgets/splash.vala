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

public class Widgets.Splash : Gtk.EventBox {
    public Splash(){
        var box = new Gtk.Box (Gtk.Orientation.VERTICAL, 5);
        box.get_style_context ().add_class ("splash_box");
        var label = new Gtk.Label("Loading");
        label.get_style_context ().add_class ("h2");
        var spinner = new Gtk.Spinner();
        spinner.start();
        box.pack_start(label,false,true,10);
        box.pack_start(spinner,false,true,10);
        add(box);
    }
}
