/* Application.c generated by valac 0.40.24, the Vala compiler
 * generated from Application.vala, do not modify */

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


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <gdk/gdk.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;
typedef struct _ApplicationPrivate ApplicationPrivate;

#define WIDGETS_TYPE_SPLASH (widgets_splash_get_type ())
#define WIDGETS_SPLASH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WIDGETS_TYPE_SPLASH, WidgetsSplash))
#define WIDGETS_SPLASH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WIDGETS_TYPE_SPLASH, WidgetsSplashClass))
#define WIDGETS_IS_SPLASH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WIDGETS_TYPE_SPLASH))
#define WIDGETS_IS_SPLASH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WIDGETS_TYPE_SPLASH))
#define WIDGETS_SPLASH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WIDGETS_TYPE_SPLASH, WidgetsSplashClass))

typedef struct _WidgetsSplash WidgetsSplash;
typedef struct _WidgetsSplashClass WidgetsSplashClass;

#define WIDGETS_TYPE_WEBVIEW (widgets_webview_get_type ())
#define WIDGETS_WEBVIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WIDGETS_TYPE_WEBVIEW, WidgetsWebview))
#define WIDGETS_WEBVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WIDGETS_TYPE_WEBVIEW, WidgetsWebviewClass))
#define WIDGETS_IS_WEBVIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WIDGETS_TYPE_WEBVIEW))
#define WIDGETS_IS_WEBVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WIDGETS_TYPE_WEBVIEW))
#define WIDGETS_WEBVIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WIDGETS_TYPE_WEBVIEW, WidgetsWebviewClass))

typedef struct _WidgetsWebview WidgetsWebview;
typedef struct _WidgetsWebviewClass WidgetsWebviewClass;
enum  {
	APPLICATION_0_PROPERTY,
	APPLICATION_NUM_PROPERTIES
};
static GParamSpec* application_properties[APPLICATION_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _Application {
	GtkApplication parent_instance;
	ApplicationPrivate * priv;
};

struct _ApplicationClass {
	GtkApplicationClass parent_class;
};

struct _ApplicationPrivate {
	WidgetsSplash* splash;
	WidgetsWebview* webview;
	GtkStack* main_stack;
};


static gpointer application_parent_class = NULL;

GType application_get_type (void) G_GNUC_CONST;
GType widgets_splash_get_type (void) G_GNUC_CONST;
GType widgets_webview_get_type (void) G_GNUC_CONST;
#define APPLICATION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_APPLICATION, ApplicationPrivate))
Application* application_new (void);
Application* application_construct (GType object_type);
static void application_real_activate (GApplication* base);
WidgetsSplash* widgets_splash_new (void);
WidgetsSplash* widgets_splash_construct (GType object_type);
WidgetsWebview* widgets_webview_new (void);
WidgetsWebview* widgets_webview_construct (GType object_type);
static void __lambda7_ (Application* self);
static void ___lambda7__widgets_webview_started (WidgetsWebview* _sender,
                                          gpointer self);
static void __lambda8_ (Application* self);
static void ___lambda8__widgets_webview_commited (WidgetsWebview* _sender,
                                           gpointer self);
static void __lambda9_ (Application* self);
static gboolean application_switch_views (Application* self);
static gboolean _application_switch_views_gsource_func (gpointer self);
static void ___lambda9__widgets_webview_loaded (WidgetsWebview* _sender,
                                         gpointer self);
gint application_main (gchar** args,
                       int args_length1);
static void application_finalize (GObject * obj);


Application*
application_construct (GType object_type)
{
	Application * self = NULL;
#line 29 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	self = (Application*) g_object_new (object_type, "application-id", "io.github.rajsolai.linsta", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 28 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	return self;
#line 126 "Application.c"
}


Application*
application_new (void)
{
#line 28 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	return application_construct (TYPE_APPLICATION);
#line 135 "Application.c"
}


static void
__lambda7_ (Application* self)
{
	GtkStack* _tmp0_;
#line 55 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp0_ = self->priv->main_stack;
#line 55 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	gtk_stack_set_visible_child_name (_tmp0_, "splash_view");
#line 147 "Application.c"
}


static void
___lambda7__widgets_webview_started (WidgetsWebview* _sender,
                                     gpointer self)
{
#line 54 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	__lambda7_ ((Application*) self);
#line 157 "Application.c"
}


static void
__lambda8_ (Application* self)
{
	GtkStack* _tmp0_;
#line 59 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp0_ = self->priv->main_stack;
#line 59 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	gtk_stack_set_visible_child_name (_tmp0_, "splash_view");
#line 169 "Application.c"
}


static void
___lambda8__widgets_webview_commited (WidgetsWebview* _sender,
                                      gpointer self)
{
#line 58 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	__lambda8_ ((Application*) self);
#line 179 "Application.c"
}


static gboolean
_application_switch_views_gsource_func (gpointer self)
{
	gboolean result;
	result = application_switch_views ((Application*) self);
#line 63 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	return result;
#line 190 "Application.c"
}


static void
__lambda9_ (Application* self)
{
#line 63 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_timeout_add_seconds_full (G_PRIORITY_DEFAULT, (guint) 5, _application_switch_views_gsource_func, g_object_ref (self), g_object_unref);
#line 199 "Application.c"
}


static void
___lambda9__widgets_webview_loaded (WidgetsWebview* _sender,
                                    gpointer self)
{
#line 62 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	__lambda9_ ((Application*) self);
#line 209 "Application.c"
}


static void
application_real_activate (GApplication* base)
{
	Application * self;
	GtkIconTheme* default_theme = NULL;
	GtkIconTheme* _tmp0_;
	GtkCssProvider* provider = NULL;
	GtkCssProvider* _tmp1_;
	GdkScreen* _tmp2_;
	GtkApplicationWindow* main_window = NULL;
	GtkApplicationWindow* _tmp3_;
	WidgetsSplash* _tmp4_;
	WidgetsWebview* _tmp5_;
	GtkStack* _tmp6_;
	GtkStack* _tmp7_;
	GtkStack* _tmp8_;
	WidgetsSplash* _tmp9_;
	GtkStack* _tmp10_;
	WidgetsWebview* _tmp11_;
	WidgetsWebview* _tmp12_;
	WidgetsWebview* _tmp13_;
	WidgetsWebview* _tmp14_;
	GtkStack* _tmp15_;
#line 35 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	self = (Application*) base;
#line 37 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp0_ = gtk_icon_theme_get_default ();
#line 37 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	default_theme = _tmp0_;
#line 38 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	gtk_icon_theme_add_resource_path (default_theme, "/io/github/rajsolai/linsta");
#line 41 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp1_ = gtk_css_provider_new ();
#line 41 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	provider = _tmp1_;
#line 42 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	gtk_css_provider_load_from_resource (provider, "/io/github/rajsolai/linsta/stylesheet.css");
#line 43 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp2_ = gdk_screen_get_default ();
#line 43 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	gtk_style_context_add_provider_for_screen (_tmp2_, (GtkStyleProvider*) provider, (guint) GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
#line 45 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp3_ = (GtkApplicationWindow*) gtk_application_window_new ((GtkApplication*) self);
#line 45 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_object_ref_sink (_tmp3_);
#line 45 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	main_window = _tmp3_;
#line 46 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp4_ = widgets_splash_new ();
#line 46 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_object_ref_sink (_tmp4_);
#line 46 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_g_object_unref0 (self->priv->splash);
#line 46 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	self->priv->splash = _tmp4_;
#line 47 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp5_ = widgets_webview_new ();
#line 47 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_object_ref_sink (_tmp5_);
#line 47 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_g_object_unref0 (self->priv->webview);
#line 47 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	self->priv->webview = _tmp5_;
#line 49 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp6_ = (GtkStack*) gtk_stack_new ();
#line 49 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_object_ref_sink (_tmp6_);
#line 49 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_g_object_unref0 (self->priv->main_stack);
#line 49 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	self->priv->main_stack = _tmp6_;
#line 50 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp7_ = self->priv->main_stack;
#line 50 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_object_set ((GtkWidget*) _tmp7_, "expand", TRUE, NULL);
#line 51 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp8_ = self->priv->main_stack;
#line 51 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp9_ = self->priv->splash;
#line 51 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	gtk_stack_add_named (_tmp8_, (GtkWidget*) _tmp9_, "splash_view");
#line 52 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp10_ = self->priv->main_stack;
#line 52 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp11_ = self->priv->webview;
#line 52 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	gtk_stack_add_named (_tmp10_, (GtkWidget*) _tmp11_, "web_view");
#line 54 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp12_ = self->priv->webview;
#line 54 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_signal_connect_object (_tmp12_, "started", (GCallback) ___lambda7__widgets_webview_started, self, 0);
#line 58 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp13_ = self->priv->webview;
#line 58 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_signal_connect_object (_tmp13_, "commited", (GCallback) ___lambda8__widgets_webview_commited, self, 0);
#line 62 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp14_ = self->priv->webview;
#line 62 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_signal_connect_object (_tmp14_, "loaded", (GCallback) ___lambda9__widgets_webview_loaded, self, 0);
#line 67 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_object_set ((GtkWindow*) main_window, "default-height", 570, NULL);
#line 68 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_object_set ((GtkWindow*) main_window, "default-width", 420, NULL);
#line 69 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	gtk_window_set_title ((GtkWindow*) main_window, "Linsta");
#line 70 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp15_ = self->priv->main_stack;
#line 70 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	gtk_container_add ((GtkContainer*) main_window, (GtkWidget*) _tmp15_);
#line 71 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	gtk_widget_show_all ((GtkWidget*) main_window);
#line 35 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_g_object_unref0 (main_window);
#line 35 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_g_object_unref0 (provider);
#line 328 "Application.c"
}


static gboolean
application_switch_views (Application* self)
{
	gboolean result = FALSE;
	GtkStack* _tmp0_;
#line 74 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 75 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp0_ = self->priv->main_stack;
#line 75 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	gtk_stack_set_visible_child_name (_tmp0_, "web_view");
#line 76 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	result = TRUE;
#line 76 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	return result;
#line 347 "Application.c"
}


gint
application_main (gchar** args,
                  int args_length1)
{
	gint result = 0;
	Application* app = NULL;
	Application* _tmp0_;
#line 80 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_tmp0_ = application_new ();
#line 80 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	app = _tmp0_;
#line 81 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	result = g_application_run ((GApplication*) app, args_length1, args);
#line 81 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_g_object_unref0 (app);
#line 81 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	return result;
#line 368 "Application.c"
}


int
main (int argc,
      char ** argv)
{
#line 79 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	return application_main (argv, argc);
#line 378 "Application.c"
}


static void
application_class_init (ApplicationClass * klass)
{
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	application_parent_class = g_type_class_peek_parent (klass);
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	g_type_class_add_private (klass, sizeof (ApplicationPrivate));
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) application_real_activate;
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	G_OBJECT_CLASS (klass)->finalize = application_finalize;
#line 393 "Application.c"
}


static void
application_instance_init (Application * self)
{
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	self->priv = APPLICATION_GET_PRIVATE (self);
#line 402 "Application.c"
}


static void
application_finalize (GObject * obj)
{
	Application * self;
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_APPLICATION, Application);
#line 24 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_g_object_unref0 (self->priv->splash);
#line 25 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_g_object_unref0 (self->priv->webview);
#line 26 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	_g_object_unref0 (self->priv->main_stack);
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Application.vala"
	G_OBJECT_CLASS (application_parent_class)->finalize (obj);
#line 420 "Application.c"
}


GType
application_get_type (void)
{
	static volatile gsize application_type_id__volatile = 0;
	if (g_once_init_enter (&application_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ApplicationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) application_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Application), 0, (GInstanceInitFunc) application_instance_init, NULL };
		GType application_type_id;
		application_type_id = g_type_register_static (gtk_application_get_type (), "Application", &g_define_type_info, 0);
		g_once_init_leave (&application_type_id__volatile, application_type_id);
	}
	return application_type_id__volatile;
}



