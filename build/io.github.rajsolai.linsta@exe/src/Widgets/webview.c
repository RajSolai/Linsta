/* webview.c generated by valac 0.40.24, the Vala compiler
 * generated from webview.vala, do not modify */

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
#include <webkit2/webkit2.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>


#define WIDGETS_TYPE_WEBVIEW (widgets_webview_get_type ())
#define WIDGETS_WEBVIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WIDGETS_TYPE_WEBVIEW, WidgetsWebview))
#define WIDGETS_WEBVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WIDGETS_TYPE_WEBVIEW, WidgetsWebviewClass))
#define WIDGETS_IS_WEBVIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WIDGETS_TYPE_WEBVIEW))
#define WIDGETS_IS_WEBVIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WIDGETS_TYPE_WEBVIEW))
#define WIDGETS_WEBVIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WIDGETS_TYPE_WEBVIEW, WidgetsWebviewClass))

typedef struct _WidgetsWebview WidgetsWebview;
typedef struct _WidgetsWebviewClass WidgetsWebviewClass;
typedef struct _WidgetsWebviewPrivate WidgetsWebviewPrivate;

#define SERVICES_TYPE_SETTINGS (services_settings_get_type ())
#define SERVICES_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SERVICES_TYPE_SETTINGS, ServicesSettings))
#define SERVICES_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SERVICES_TYPE_SETTINGS, ServicesSettingsClass))
#define SERVICES_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SERVICES_TYPE_SETTINGS))
#define SERVICES_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SERVICES_TYPE_SETTINGS))
#define SERVICES_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SERVICES_TYPE_SETTINGS, ServicesSettingsClass))

typedef struct _ServicesSettings ServicesSettings;
typedef struct _ServicesSettingsClass ServicesSettingsClass;
enum  {
	WIDGETS_WEBVIEW_0_PROPERTY,
	WIDGETS_WEBVIEW_NUM_PROPERTIES
};
static GParamSpec* widgets_webview_properties[WIDGETS_WEBVIEW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
enum  {
	WIDGETS_WEBVIEW_LOADED_SIGNAL,
	WIDGETS_WEBVIEW_STARTED_SIGNAL,
	WIDGETS_WEBVIEW_COMMITED_SIGNAL,
	WIDGETS_WEBVIEW_NUM_SIGNALS
};
static guint widgets_webview_signals[WIDGETS_WEBVIEW_NUM_SIGNALS] = {0};

struct _WidgetsWebview {
	GtkEventBox parent_instance;
	WidgetsWebviewPrivate * priv;
};

struct _WidgetsWebviewClass {
	GtkEventBoxClass parent_class;
};

struct _WidgetsWebviewPrivate {
	ServicesSettings* web_view_settings;
	gchar* cookie_db;
};


static gpointer widgets_webview_parent_class = NULL;

GType widgets_webview_get_type (void) G_GNUC_CONST;
GType services_settings_get_type (void) G_GNUC_CONST;
#define WIDGETS_WEBVIEW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WIDGETS_TYPE_WEBVIEW, WidgetsWebviewPrivate))
WidgetsWebview* widgets_webview_new (void);
WidgetsWebview* widgets_webview_construct (GType object_type);
void widgets_webview_make_cookie_jar (WidgetsWebview* self);
ServicesSettings* services_settings_new (void);
ServicesSettings* services_settings_construct (GType object_type);
static void __lambda4_ (WidgetsWebview* self,
                 WebKitLoadEvent WEBKIT_LOAD_FINISHED);
static void ___lambda4__webkit_web_view_load_changed (WebKitWebView* _sender,
                                               WebKitLoadEvent load_event,
                                               gpointer self);
static void __lambda5_ (WidgetsWebview* self,
                 WebKitLoadEvent WEBKIT_LOAD_STARTED);
static void ___lambda5__webkit_web_view_load_changed (WebKitWebView* _sender,
                                               WebKitLoadEvent load_event,
                                               gpointer self);
static void __lambda6_ (WidgetsWebview* self,
                 WebKitLoadEvent WEBKIT_LOAD_COMMITTED);
static void ___lambda6__webkit_web_view_load_changed (WebKitWebView* _sender,
                                               WebKitLoadEvent load_event,
                                               gpointer self);
static void widgets_webview_finalize (GObject * obj);


static gpointer
_g_object_ref0 (gpointer self)
{
#line 27 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	return self ? g_object_ref (self) : NULL;
#line 120 "webview.c"
}


static void
__lambda4_ (WidgetsWebview* self,
            WebKitLoadEvent WEBKIT_LOAD_FINISHED)
{
#line 39 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	g_signal_emit (self, widgets_webview_signals[WIDGETS_WEBVIEW_LOADED_SIGNAL], 0);
#line 130 "webview.c"
}


static void
___lambda4__webkit_web_view_load_changed (WebKitWebView* _sender,
                                          WebKitLoadEvent load_event,
                                          gpointer self)
{
#line 38 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	__lambda4_ ((WidgetsWebview*) self, load_event);
#line 141 "webview.c"
}


static void
__lambda5_ (WidgetsWebview* self,
            WebKitLoadEvent WEBKIT_LOAD_STARTED)
{
#line 42 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	g_signal_emit (self, widgets_webview_signals[WIDGETS_WEBVIEW_STARTED_SIGNAL], 0);
#line 151 "webview.c"
}


static void
___lambda5__webkit_web_view_load_changed (WebKitWebView* _sender,
                                          WebKitLoadEvent load_event,
                                          gpointer self)
{
#line 41 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	__lambda5_ ((WidgetsWebview*) self, load_event);
#line 162 "webview.c"
}


static void
__lambda6_ (WidgetsWebview* self,
            WebKitLoadEvent WEBKIT_LOAD_COMMITTED)
{
#line 45 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	g_signal_emit (self, widgets_webview_signals[WIDGETS_WEBVIEW_COMMITED_SIGNAL], 0);
#line 172 "webview.c"
}


static void
___lambda6__webkit_web_view_load_changed (WebKitWebView* _sender,
                                          WebKitLoadEvent load_event,
                                          gpointer self)
{
#line 44 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	__lambda6_ ((WidgetsWebview*) self, load_event);
#line 183 "webview.c"
}


WidgetsWebview*
widgets_webview_construct (GType object_type)
{
	WidgetsWebview * self = NULL;
	WebKitWebContext* web_view_context = NULL;
	WebKitWebContext* _tmp0_;
	WebKitWebContext* _tmp1_;
	WebKitWebView* web_view = NULL;
	WebKitWebView* _tmp2_;
	WebKitCookieManager* cookie_manager = NULL;
	WebKitWebContext* _tmp3_;
	WebKitWebContext* _tmp4_;
	WebKitWebContext* _tmp5_;
	WebKitCookieManager* _tmp6_;
	WebKitCookieManager* _tmp7_;
	WebKitCookieManager* _tmp8_;
	const gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	ServicesSettings* _tmp12_;
	ServicesSettings* _tmp13_;
#line 25 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	self = (WidgetsWebview*) g_object_new (object_type, NULL);
#line 26 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	widgets_webview_make_cookie_jar (self);
#line 27 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp0_ = webkit_web_context_get_default ();
#line 27 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 27 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	web_view_context = _tmp1_;
#line 28 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp2_ = (WebKitWebView*) webkit_web_view_new_with_context (web_view_context);
#line 28 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	g_object_ref_sink (_tmp2_);
#line 28 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	web_view = _tmp2_;
#line 30 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	g_object_get (web_view, "web-context", &_tmp3_, NULL);
#line 30 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp4_ = _tmp3_;
#line 30 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp5_ = _tmp4_;
#line 30 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp6_ = webkit_web_context_get_cookie_manager (_tmp5_);
#line 30 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp7_ = _g_object_ref0 (_tmp6_);
#line 30 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp8_ = _tmp7_;
#line 30 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_g_object_unref0 (_tmp5_);
#line 30 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	cookie_manager = _tmp8_;
#line 31 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	webkit_cookie_manager_set_accept_policy (cookie_manager, WEBKIT_COOKIE_POLICY_ACCEPT_ALWAYS);
#line 32 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp9_ = self->priv->cookie_db;
#line 32 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp10_ = g_strconcat (_tmp9_, "cookies.db", NULL);
#line 32 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp11_ = _tmp10_;
#line 32 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	webkit_cookie_manager_set_persistent_storage (cookie_manager, _tmp11_, WEBKIT_COOKIE_PERSISTENT_STORAGE_SQLITE);
#line 32 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_g_free0 (_tmp11_);
#line 34 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp12_ = services_settings_new ();
#line 34 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_g_object_unref0 (self->priv->web_view_settings);
#line 34 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	self->priv->web_view_settings = _tmp12_;
#line 35 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp13_ = self->priv->web_view_settings;
#line 35 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	webkit_web_view_set_settings (web_view, (WebKitSettings*) _tmp13_);
#line 36 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	webkit_web_view_set_zoom_level (web_view, 1.0);
#line 37 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	webkit_web_view_load_uri (web_view, "https://www.instagram.com/");
#line 38 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	g_signal_connect_object (web_view, "load-changed", (GCallback) ___lambda4__webkit_web_view_load_changed, self, 0);
#line 41 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	g_signal_connect_object (web_view, "load-changed", (GCallback) ___lambda5__webkit_web_view_load_changed, self, 0);
#line 44 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	g_signal_connect_object (web_view, "load-changed", (GCallback) ___lambda6__webkit_web_view_load_changed, self, 0);
#line 47 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) web_view);
#line 25 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_g_object_unref0 (cookie_manager);
#line 25 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_g_object_unref0 (web_view);
#line 25 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_g_object_unref0 (web_view_context);
#line 25 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	return self;
#line 282 "webview.c"
}


WidgetsWebview*
widgets_webview_new (void)
{
#line 25 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	return widgets_webview_construct (WIDGETS_TYPE_WEBVIEW);
#line 291 "webview.c"
}


void
widgets_webview_make_cookie_jar (WidgetsWebview* self)
{
	GFile* dir = NULL;
	const gchar* _tmp0_;
	GFile* _tmp1_;
	GFile* _tmp2_;
	GError* _inner_error0_ = NULL;
#line 49 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	g_return_if_fail (self != NULL);
#line 50 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp0_ = self->priv->cookie_db;
#line 50 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp1_ = g_file_new_for_path (_tmp0_);
#line 50 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	dir = _tmp1_;
#line 51 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp2_ = dir;
#line 51 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	if (!g_file_query_exists (_tmp2_, NULL)) {
#line 315 "webview.c"
		{
			GFile* _tmp3_;
#line 53 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
			_tmp3_ = dir;
#line 53 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
			g_file_make_directory_with_parents (_tmp3_, NULL, &_inner_error0_);
#line 53 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
			if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 324 "webview.c"
				goto __catch0_g_error;
			}
		}
		goto __finally0;
		__catch0_g_error:
		{
			GError* err = NULL;
#line 52 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
			err = _inner_error0_;
#line 52 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
			_inner_error0_ = NULL;
#line 55 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
			g_warning ("webview.vala:55: Could not create caching directory.");
#line 52 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
			_g_error_free0 (err);
#line 340 "webview.c"
		}
		__finally0:
#line 52 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 52 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
			_g_object_unref0 (dir);
#line 52 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 52 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
			g_clear_error (&_inner_error0_);
#line 52 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
			return;
#line 353 "webview.c"
		}
	}
#line 49 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_g_object_unref0 (dir);
#line 358 "webview.c"
}


static void
widgets_webview_class_init (WidgetsWebviewClass * klass)
{
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	widgets_webview_parent_class = g_type_class_peek_parent (klass);
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	g_type_class_add_private (klass, sizeof (WidgetsWebviewPrivate));
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	G_OBJECT_CLASS (klass)->finalize = widgets_webview_finalize;
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	widgets_webview_signals[WIDGETS_WEBVIEW_LOADED_SIGNAL] = g_signal_new ("loaded", WIDGETS_TYPE_WEBVIEW, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	widgets_webview_signals[WIDGETS_WEBVIEW_STARTED_SIGNAL] = g_signal_new ("started", WIDGETS_TYPE_WEBVIEW, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	widgets_webview_signals[WIDGETS_WEBVIEW_COMMITED_SIGNAL] = g_signal_new ("commited", WIDGETS_TYPE_WEBVIEW, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 377 "webview.c"
}


static void
widgets_webview_instance_init (WidgetsWebview * self)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	self->priv = WIDGETS_WEBVIEW_GET_PRIVATE (self);
#line 24 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp0_ = g_get_user_cache_dir ();
#line 24 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_tmp1_ = g_strconcat (_tmp0_, "/linsta/cookies/", NULL);
#line 24 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	self->priv->cookie_db = _tmp1_;
#line 394 "webview.c"
}


static void
widgets_webview_finalize (GObject * obj)
{
	WidgetsWebview * self;
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WIDGETS_TYPE_WEBVIEW, WidgetsWebview);
#line 23 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_g_object_unref0 (self->priv->web_view_settings);
#line 24 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	_g_free0 (self->priv->cookie_db);
#line 22 "/home/solairaj/office/io.github.rajsolai.linsta/src/Widgets/webview.vala"
	G_OBJECT_CLASS (widgets_webview_parent_class)->finalize (obj);
#line 410 "webview.c"
}


GType
widgets_webview_get_type (void)
{
	static volatile gsize widgets_webview_type_id__volatile = 0;
	if (g_once_init_enter (&widgets_webview_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WidgetsWebviewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) widgets_webview_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WidgetsWebview), 0, (GInstanceInitFunc) widgets_webview_instance_init, NULL };
		GType widgets_webview_type_id;
		widgets_webview_type_id = g_type_register_static (gtk_event_box_get_type (), "WidgetsWebview", &g_define_type_info, 0);
		g_once_init_leave (&widgets_webview_type_id__volatile, widgets_webview_type_id);
	}
	return widgets_webview_type_id__volatile;
}



