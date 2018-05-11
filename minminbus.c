/*
 * Generated by gdbus-codegen 2.48.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif

#include "minminbus.h"

#include <string.h>
#ifdef G_OS_UNIX
#  include <gio/gunixfdlist.h>
#endif

typedef struct
{
  GDBusArgInfo parent_struct;
  gboolean use_gvariant;
} _ExtendedGDBusArgInfo;

typedef struct
{
  GDBusMethodInfo parent_struct;
  const gchar *signal_name;
  gboolean pass_fdlist;
} _ExtendedGDBusMethodInfo;

typedef struct
{
  GDBusSignalInfo parent_struct;
  const gchar *signal_name;
} _ExtendedGDBusSignalInfo;

typedef struct
{
  GDBusPropertyInfo parent_struct;
  const gchar *hyphen_name;
  gboolean use_gvariant;
} _ExtendedGDBusPropertyInfo;

typedef struct
{
  GDBusInterfaceInfo parent_struct;
  const gchar *hyphen_name;
} _ExtendedGDBusInterfaceInfo;

typedef struct
{
  const _ExtendedGDBusPropertyInfo *info;
  guint prop_id;
  GValue orig_value; /* the value before the change */
} ChangedProperty;

static void
_changed_property_free (ChangedProperty *data)
{
  g_value_unset (&data->orig_value);
  g_free (data);
}

static gboolean
_g_strv_equal0 (gchar **a, gchar **b)
{
  gboolean ret = FALSE;
  guint n;
  if (a == NULL && b == NULL)
    {
      ret = TRUE;
      goto out;
    }
  if (a == NULL || b == NULL)
    goto out;
  if (g_strv_length (a) != g_strv_length (b))
    goto out;
  for (n = 0; a[n] != NULL; n++)
    if (g_strcmp0 (a[n], b[n]) != 0)
      goto out;
  ret = TRUE;
out:
  return ret;
}

static gboolean
_g_variant_equal0 (GVariant *a, GVariant *b)
{
  gboolean ret = FALSE;
  if (a == NULL && b == NULL)
    {
      ret = TRUE;
      goto out;
    }
  if (a == NULL || b == NULL)
    goto out;
  ret = g_variant_equal (a, b);
out:
  return ret;
}

G_GNUC_UNUSED static gboolean
_g_value_equal (const GValue *a, const GValue *b)
{
  gboolean ret = FALSE;
  g_assert (G_VALUE_TYPE (a) == G_VALUE_TYPE (b));
  switch (G_VALUE_TYPE (a))
    {
      case G_TYPE_BOOLEAN:
        ret = (g_value_get_boolean (a) == g_value_get_boolean (b));
        break;
      case G_TYPE_UCHAR:
        ret = (g_value_get_uchar (a) == g_value_get_uchar (b));
        break;
      case G_TYPE_INT:
        ret = (g_value_get_int (a) == g_value_get_int (b));
        break;
      case G_TYPE_UINT:
        ret = (g_value_get_uint (a) == g_value_get_uint (b));
        break;
      case G_TYPE_INT64:
        ret = (g_value_get_int64 (a) == g_value_get_int64 (b));
        break;
      case G_TYPE_UINT64:
        ret = (g_value_get_uint64 (a) == g_value_get_uint64 (b));
        break;
      case G_TYPE_DOUBLE:
        {
          /* Avoid -Wfloat-equal warnings by doing a direct bit compare */
          gdouble da = g_value_get_double (a);
          gdouble db = g_value_get_double (b);
          ret = memcmp (&da, &db, sizeof (gdouble)) == 0;
        }
        break;
      case G_TYPE_STRING:
        ret = (g_strcmp0 (g_value_get_string (a), g_value_get_string (b)) == 0);
        break;
      case G_TYPE_VARIANT:
        ret = _g_variant_equal0 (g_value_get_variant (a), g_value_get_variant (b));
        break;
      default:
        if (G_VALUE_TYPE (a) == G_TYPE_STRV)
          ret = _g_strv_equal0 (g_value_get_boxed (a), g_value_get_boxed (b));
        else
          g_critical ("_g_value_equal() does not handle type %s", g_type_name (G_VALUE_TYPE (a)));
        break;
    }
  return ret;
}

/* ------------------------------------------------------------------------
 * Code for interface com.fatminmin.GDBUS
 * ------------------------------------------------------------------------
 */

/**
 * SECTION:MinMinBusGDBUS
 * @title: MinMinBusGDBUS
 * @short_description: Generated C code for the com.fatminmin.GDBUS D-Bus interface
 *
 * This section contains code for working with the <link linkend="gdbus-interface-com-fatminmin-GDBUS.top_of_page">com.fatminmin.GDBUS</link> D-Bus interface in C.
 */

/* ---- Introspection data for com.fatminmin.GDBUS ---- */

static const _ExtendedGDBusArgInfo _min_min_bus_gdbus_method_info_hello_world_IN_ARG_greeting =
{
  {
    -1,
    (gchar *) "greeting",
    (gchar *) "s",
    NULL
  },
  FALSE
};

static const _ExtendedGDBusArgInfo * const _min_min_bus_gdbus_method_info_hello_world_IN_ARG_pointers[] =
{
  &_min_min_bus_gdbus_method_info_hello_world_IN_ARG_greeting,
  NULL
};

static const _ExtendedGDBusArgInfo _min_min_bus_gdbus_method_info_hello_world_OUT_ARG_response =
{
  {
    -1,
    (gchar *) "response",
    (gchar *) "s",
    NULL
  },
  FALSE
};

static const _ExtendedGDBusArgInfo * const _min_min_bus_gdbus_method_info_hello_world_OUT_ARG_pointers[] =
{
  &_min_min_bus_gdbus_method_info_hello_world_OUT_ARG_response,
  NULL
};

static const _ExtendedGDBusMethodInfo _min_min_bus_gdbus_method_info_hello_world =
{
  {
    -1,
    (gchar *) "HelloWorld",
    (GDBusArgInfo **) &_min_min_bus_gdbus_method_info_hello_world_IN_ARG_pointers,
    (GDBusArgInfo **) &_min_min_bus_gdbus_method_info_hello_world_OUT_ARG_pointers,
    NULL
  },
  "handle-hello-world",
  FALSE
};

static const _ExtendedGDBusMethodInfo * const _min_min_bus_gdbus_method_info_pointers[] =
{
  &_min_min_bus_gdbus_method_info_hello_world,
  NULL
};

static const _ExtendedGDBusInterfaceInfo _min_min_bus_gdbus_interface_info =
{
  {
    -1,
    (gchar *) "com.fatminmin.GDBUS",
    (GDBusMethodInfo **) &_min_min_bus_gdbus_method_info_pointers,
    NULL,
    NULL,
    NULL
  },
  "gdbus",
};


/**
 * min_min_bus_gdbus_interface_info:
 *
 * Gets a machine-readable description of the <link linkend="gdbus-interface-com-fatminmin-GDBUS.top_of_page">com.fatminmin.GDBUS</link> D-Bus interface.
 *
 * Returns: (transfer none): A #GDBusInterfaceInfo. Do not free.
 */
GDBusInterfaceInfo *
min_min_bus_gdbus_interface_info (void)
{
  return (GDBusInterfaceInfo *) &_min_min_bus_gdbus_interface_info.parent_struct;
}

/**
 * min_min_bus_gdbus_override_properties:
 * @klass: The class structure for a #GObject<!-- -->-derived class.
 * @property_id_begin: The property id to assign to the first overridden property.
 *
 * Overrides all #GObject properties in the #MinMinBusGDBUS interface for a concrete class.
 * The properties are overridden in the order they are defined.
 *
 * Returns: The last property id.
 */
guint
min_min_bus_gdbus_override_properties (GObjectClass *klass, guint property_id_begin)
{
  return property_id_begin - 1;
}



/**
 * MinMinBusGDBUS:
 *
 * Abstract interface type for the D-Bus interface <link linkend="gdbus-interface-com-fatminmin-GDBUS.top_of_page">com.fatminmin.GDBUS</link>.
 */

/**
 * MinMinBusGDBUSIface:
 * @parent_iface: The parent interface.
 * @handle_hello_world: Handler for the #MinMinBusGDBUS::handle-hello-world signal.
 *
 * Virtual table for the D-Bus interface <link linkend="gdbus-interface-com-fatminmin-GDBUS.top_of_page">com.fatminmin.GDBUS</link>.
 */

typedef MinMinBusGDBUSIface MinMinBusGDBUSInterface;
G_DEFINE_INTERFACE (MinMinBusGDBUS, min_min_bus_gdbus, G_TYPE_OBJECT);

static void
min_min_bus_gdbus_default_init (MinMinBusGDBUSIface *iface)
{
  /* GObject signals for incoming D-Bus method calls: */
  /**
   * MinMinBusGDBUS::handle-hello-world:
   * @object: A #MinMinBusGDBUS.
   * @invocation: A #GDBusMethodInvocation.
   * @arg_greeting: Argument passed by remote caller.
   *
   * Signal emitted when a remote caller is invoking the <link linkend="gdbus-method-com-fatminmin-GDBUS.HelloWorld">HelloWorld()</link> D-Bus method.
   *
   * If a signal handler returns %TRUE, it means the signal handler will handle the invocation (e.g. take a reference to @invocation and eventually call min_min_bus_gdbus_complete_hello_world() or e.g. g_dbus_method_invocation_return_error() on it) and no order signal handlers will run. If no signal handler handles the invocation, the %G_DBUS_ERROR_UNKNOWN_METHOD error is returned.
   *
   * Returns: %TRUE if the invocation was handled, %FALSE to let other signal handlers run.
   */
  g_signal_new ("handle-hello-world",
    G_TYPE_FROM_INTERFACE (iface),
    G_SIGNAL_RUN_LAST,
    G_STRUCT_OFFSET (MinMinBusGDBUSIface, handle_hello_world),
    g_signal_accumulator_true_handled,
    NULL,
    g_cclosure_marshal_generic,
    G_TYPE_BOOLEAN,
    2,
    G_TYPE_DBUS_METHOD_INVOCATION, G_TYPE_STRING);

}

/**
 * min_min_bus_gdbus_call_hello_world:
 * @proxy: A #MinMinBusGDBUSProxy.
 * @arg_greeting: Argument to pass with the method invocation.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied or %NULL.
 * @user_data: User data to pass to @callback.
 *
 * Asynchronously invokes the <link linkend="gdbus-method-com-fatminmin-GDBUS.HelloWorld">HelloWorld()</link> D-Bus method on @proxy.
 * When the operation is finished, @callback will be invoked in the <link linkend="g-main-context-push-thread-default">thread-default main loop</link> of the thread you are calling this method from.
 * You can then call min_min_bus_gdbus_call_hello_world_finish() to get the result of the operation.
 *
 * See min_min_bus_gdbus_call_hello_world_sync() for the synchronous, blocking version of this method.
 */
void
min_min_bus_gdbus_call_hello_world (
    MinMinBusGDBUS *proxy,
    const gchar *arg_greeting,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data)
{
  g_dbus_proxy_call (G_DBUS_PROXY (proxy),
    "HelloWorld",
    g_variant_new ("(s)",
                   arg_greeting),
    G_DBUS_CALL_FLAGS_NONE,
    -1,
    cancellable,
    callback,
    user_data);
}

/**
 * min_min_bus_gdbus_call_hello_world_finish:
 * @proxy: A #MinMinBusGDBUSProxy.
 * @out_response: (out): Return location for return parameter or %NULL to ignore.
 * @res: The #GAsyncResult obtained from the #GAsyncReadyCallback passed to min_min_bus_gdbus_call_hello_world().
 * @error: Return location for error or %NULL.
 *
 * Finishes an operation started with min_min_bus_gdbus_call_hello_world().
 *
 * Returns: (skip): %TRUE if the call succeded, %FALSE if @error is set.
 */
gboolean
min_min_bus_gdbus_call_hello_world_finish (
    MinMinBusGDBUS *proxy,
    gchar **out_response,
    GAsyncResult *res,
    GError **error)
{
  GVariant *_ret;
  _ret = g_dbus_proxy_call_finish (G_DBUS_PROXY (proxy), res, error);
  if (_ret == NULL)
    goto _out;
  g_variant_get (_ret,
                 "(s)",
                 out_response);
  g_variant_unref (_ret);
_out:
  return _ret != NULL;
}

/**
 * min_min_bus_gdbus_call_hello_world_sync:
 * @proxy: A #MinMinBusGDBUSProxy.
 * @arg_greeting: Argument to pass with the method invocation.
 * @out_response: (out): Return location for return parameter or %NULL to ignore.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL.
 *
 * Synchronously invokes the <link linkend="gdbus-method-com-fatminmin-GDBUS.HelloWorld">HelloWorld()</link> D-Bus method on @proxy. The calling thread is blocked until a reply is received.
 *
 * See min_min_bus_gdbus_call_hello_world() for the asynchronous version of this method.
 *
 * Returns: (skip): %TRUE if the call succeded, %FALSE if @error is set.
 */
gboolean
min_min_bus_gdbus_call_hello_world_sync (
    MinMinBusGDBUS *proxy,
    const gchar *arg_greeting,
    gchar **out_response,
    GCancellable *cancellable,
    GError **error)
{
  GVariant *_ret;
  _ret = g_dbus_proxy_call_sync (G_DBUS_PROXY (proxy),
    "HelloWorld",
    g_variant_new ("(s)",
                   arg_greeting),
    G_DBUS_CALL_FLAGS_NONE,
    -1,
    cancellable,
    error);
  if (_ret == NULL)
    goto _out;
  g_variant_get (_ret,
                 "(s)",
                 out_response);
  g_variant_unref (_ret);
_out:
  return _ret != NULL;
}

/**
 * min_min_bus_gdbus_complete_hello_world:
 * @object: A #MinMinBusGDBUS.
 * @invocation: (transfer full): A #GDBusMethodInvocation.
 * @response: Parameter to return.
 *
 * Helper function used in service implementations to finish handling invocations of the <link linkend="gdbus-method-com-fatminmin-GDBUS.HelloWorld">HelloWorld()</link> D-Bus method. If you instead want to finish handling an invocation by returning an error, use g_dbus_method_invocation_return_error() or similar.
 *
 * This method will free @invocation, you cannot use it afterwards.
 */
void
min_min_bus_gdbus_complete_hello_world (
    MinMinBusGDBUS *object,
    GDBusMethodInvocation *invocation,
    const gchar *response)
{
  g_dbus_method_invocation_return_value (invocation,
    g_variant_new ("(s)",
                   response));
}

/* ------------------------------------------------------------------------ */

/**
 * MinMinBusGDBUSProxy:
 *
 * The #MinMinBusGDBUSProxy structure contains only private data and should only be accessed using the provided API.
 */

/**
 * MinMinBusGDBUSProxyClass:
 * @parent_class: The parent class.
 *
 * Class structure for #MinMinBusGDBUSProxy.
 */

struct _MinMinBusGDBUSProxyPrivate
{
  GData *qdata;
};

static void min_min_bus_gdbus_proxy_iface_init (MinMinBusGDBUSIface *iface);

#if GLIB_VERSION_MAX_ALLOWED >= GLIB_VERSION_2_38
G_DEFINE_TYPE_WITH_CODE (MinMinBusGDBUSProxy, min_min_bus_gdbus_proxy, G_TYPE_DBUS_PROXY,
                         G_ADD_PRIVATE (MinMinBusGDBUSProxy)
                         G_IMPLEMENT_INTERFACE (MIN_MIN_BUS_TYPE_GDBUS, min_min_bus_gdbus_proxy_iface_init));

#else
G_DEFINE_TYPE_WITH_CODE (MinMinBusGDBUSProxy, min_min_bus_gdbus_proxy, G_TYPE_DBUS_PROXY,
                         G_IMPLEMENT_INTERFACE (MIN_MIN_BUS_TYPE_GDBUS, min_min_bus_gdbus_proxy_iface_init));

#endif
static void
min_min_bus_gdbus_proxy_finalize (GObject *object)
{
  MinMinBusGDBUSProxy *proxy = MIN_MIN_BUS_GDBUS_PROXY (object);
  g_datalist_clear (&proxy->priv->qdata);
  G_OBJECT_CLASS (min_min_bus_gdbus_proxy_parent_class)->finalize (object);
}

static void
min_min_bus_gdbus_proxy_get_property (GObject      *object,
  guint         prop_id,
  GValue       *value,
  GParamSpec   *pspec G_GNUC_UNUSED)
{
}

static void
min_min_bus_gdbus_proxy_set_property (GObject      *object,
  guint         prop_id,
  const GValue *value,
  GParamSpec   *pspec G_GNUC_UNUSED)
{
}

static void
min_min_bus_gdbus_proxy_g_signal (GDBusProxy *proxy,
  const gchar *sender_name G_GNUC_UNUSED,
  const gchar *signal_name,
  GVariant *parameters)
{
  _ExtendedGDBusSignalInfo *info;
  GVariantIter iter;
  GVariant *child;
  GValue *paramv;
  guint num_params;
  guint n;
  guint signal_id;
  info = (_ExtendedGDBusSignalInfo *) g_dbus_interface_info_lookup_signal ((GDBusInterfaceInfo *) &_min_min_bus_gdbus_interface_info.parent_struct, signal_name);
  if (info == NULL)
    return;
  num_params = g_variant_n_children (parameters);
  paramv = g_new0 (GValue, num_params + 1);
  g_value_init (&paramv[0], MIN_MIN_BUS_TYPE_GDBUS);
  g_value_set_object (&paramv[0], proxy);
  g_variant_iter_init (&iter, parameters);
  n = 1;
  while ((child = g_variant_iter_next_value (&iter)) != NULL)
    {
      _ExtendedGDBusArgInfo *arg_info = (_ExtendedGDBusArgInfo *) info->parent_struct.args[n - 1];
      if (arg_info->use_gvariant)
        {
          g_value_init (&paramv[n], G_TYPE_VARIANT);
          g_value_set_variant (&paramv[n], child);
          n++;
        }
      else
        g_dbus_gvariant_to_gvalue (child, &paramv[n++]);
      g_variant_unref (child);
    }
  signal_id = g_signal_lookup (info->signal_name, MIN_MIN_BUS_TYPE_GDBUS);
  g_signal_emitv (paramv, signal_id, 0, NULL);
  for (n = 0; n < num_params + 1; n++)
    g_value_unset (&paramv[n]);
  g_free (paramv);
}

static void
min_min_bus_gdbus_proxy_g_properties_changed (GDBusProxy *_proxy,
  GVariant *changed_properties,
  const gchar *const *invalidated_properties)
{
  MinMinBusGDBUSProxy *proxy = MIN_MIN_BUS_GDBUS_PROXY (_proxy);
  guint n;
  const gchar *key;
  GVariantIter *iter;
  _ExtendedGDBusPropertyInfo *info;
  g_variant_get (changed_properties, "a{sv}", &iter);
  while (g_variant_iter_next (iter, "{&sv}", &key, NULL))
    {
      info = (_ExtendedGDBusPropertyInfo *) g_dbus_interface_info_lookup_property ((GDBusInterfaceInfo *) &_min_min_bus_gdbus_interface_info.parent_struct, key);
      g_datalist_remove_data (&proxy->priv->qdata, key);
      if (info != NULL)
        g_object_notify (G_OBJECT (proxy), info->hyphen_name);
    }
  g_variant_iter_free (iter);
  for (n = 0; invalidated_properties[n] != NULL; n++)
    {
      info = (_ExtendedGDBusPropertyInfo *) g_dbus_interface_info_lookup_property ((GDBusInterfaceInfo *) &_min_min_bus_gdbus_interface_info.parent_struct, invalidated_properties[n]);
      g_datalist_remove_data (&proxy->priv->qdata, invalidated_properties[n]);
      if (info != NULL)
        g_object_notify (G_OBJECT (proxy), info->hyphen_name);
    }
}

static void
min_min_bus_gdbus_proxy_init (MinMinBusGDBUSProxy *proxy)
{
#if GLIB_VERSION_MAX_ALLOWED >= GLIB_VERSION_2_38
  proxy->priv = min_min_bus_gdbus_proxy_get_instance_private (proxy);
#else
  proxy->priv = G_TYPE_INSTANCE_GET_PRIVATE (proxy, MIN_MIN_BUS_TYPE_GDBUS_PROXY, MinMinBusGDBUSProxyPrivate);
#endif

  g_dbus_proxy_set_interface_info (G_DBUS_PROXY (proxy), min_min_bus_gdbus_interface_info ());
}

static void
min_min_bus_gdbus_proxy_class_init (MinMinBusGDBUSProxyClass *klass)
{
  GObjectClass *gobject_class;
  GDBusProxyClass *proxy_class;

  gobject_class = G_OBJECT_CLASS (klass);
  gobject_class->finalize     = min_min_bus_gdbus_proxy_finalize;
  gobject_class->get_property = min_min_bus_gdbus_proxy_get_property;
  gobject_class->set_property = min_min_bus_gdbus_proxy_set_property;

  proxy_class = G_DBUS_PROXY_CLASS (klass);
  proxy_class->g_signal = min_min_bus_gdbus_proxy_g_signal;
  proxy_class->g_properties_changed = min_min_bus_gdbus_proxy_g_properties_changed;

#if GLIB_VERSION_MAX_ALLOWED < GLIB_VERSION_2_38
  g_type_class_add_private (klass, sizeof (MinMinBusGDBUSProxyPrivate));
#endif
}

static void
min_min_bus_gdbus_proxy_iface_init (MinMinBusGDBUSIface *iface)
{
}

/**
 * min_min_bus_gdbus_proxy_new:
 * @connection: A #GDBusConnection.
 * @flags: Flags from the #GDBusProxyFlags enumeration.
 * @name: (allow-none): A bus name (well-known or unique) or %NULL if @connection is not a message bus connection.
 * @object_path: An object path.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: User data to pass to @callback.
 *
 * Asynchronously creates a proxy for the D-Bus interface <link linkend="gdbus-interface-com-fatminmin-GDBUS.top_of_page">com.fatminmin.GDBUS</link>. See g_dbus_proxy_new() for more details.
 *
 * When the operation is finished, @callback will be invoked in the <link linkend="g-main-context-push-thread-default">thread-default main loop</link> of the thread you are calling this method from.
 * You can then call min_min_bus_gdbus_proxy_new_finish() to get the result of the operation.
 *
 * See min_min_bus_gdbus_proxy_new_sync() for the synchronous, blocking version of this constructor.
 */
void
min_min_bus_gdbus_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data)
{
  g_async_initable_new_async (MIN_MIN_BUS_TYPE_GDBUS_PROXY, G_PRIORITY_DEFAULT, cancellable, callback, user_data, "g-flags", flags, "g-name", name, "g-connection", connection, "g-object-path", object_path, "g-interface-name", "com.fatminmin.GDBUS", NULL);
}

/**
 * min_min_bus_gdbus_proxy_new_finish:
 * @res: The #GAsyncResult obtained from the #GAsyncReadyCallback passed to min_min_bus_gdbus_proxy_new().
 * @error: Return location for error or %NULL
 *
 * Finishes an operation started with min_min_bus_gdbus_proxy_new().
 *
 * Returns: (transfer full) (type MinMinBusGDBUSProxy): The constructed proxy object or %NULL if @error is set.
 */
MinMinBusGDBUS *
min_min_bus_gdbus_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error)
{
  GObject *ret;
  GObject *source_object;
  source_object = g_async_result_get_source_object (res);
  ret = g_async_initable_new_finish (G_ASYNC_INITABLE (source_object), res, error);
  g_object_unref (source_object);
  if (ret != NULL)
    return MIN_MIN_BUS_GDBUS (ret);
  else
    return NULL;
}

/**
 * min_min_bus_gdbus_proxy_new_sync:
 * @connection: A #GDBusConnection.
 * @flags: Flags from the #GDBusProxyFlags enumeration.
 * @name: (allow-none): A bus name (well-known or unique) or %NULL if @connection is not a message bus connection.
 * @object_path: An object path.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL
 *
 * Synchronously creates a proxy for the D-Bus interface <link linkend="gdbus-interface-com-fatminmin-GDBUS.top_of_page">com.fatminmin.GDBUS</link>. See g_dbus_proxy_new_sync() for more details.
 *
 * The calling thread is blocked until a reply is received.
 *
 * See min_min_bus_gdbus_proxy_new() for the asynchronous version of this constructor.
 *
 * Returns: (transfer full) (type MinMinBusGDBUSProxy): The constructed proxy object or %NULL if @error is set.
 */
MinMinBusGDBUS *
min_min_bus_gdbus_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error)
{
  GInitable *ret;
  ret = g_initable_new (MIN_MIN_BUS_TYPE_GDBUS_PROXY, cancellable, error, "g-flags", flags, "g-name", name, "g-connection", connection, "g-object-path", object_path, "g-interface-name", "com.fatminmin.GDBUS", NULL);
  if (ret != NULL)
    return MIN_MIN_BUS_GDBUS (ret);
  else
    return NULL;
}


/**
 * min_min_bus_gdbus_proxy_new_for_bus:
 * @bus_type: A #GBusType.
 * @flags: Flags from the #GDBusProxyFlags enumeration.
 * @name: A bus name (well-known or unique).
 * @object_path: An object path.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @callback: A #GAsyncReadyCallback to call when the request is satisfied.
 * @user_data: User data to pass to @callback.
 *
 * Like min_min_bus_gdbus_proxy_new() but takes a #GBusType instead of a #GDBusConnection.
 *
 * When the operation is finished, @callback will be invoked in the <link linkend="g-main-context-push-thread-default">thread-default main loop</link> of the thread you are calling this method from.
 * You can then call min_min_bus_gdbus_proxy_new_for_bus_finish() to get the result of the operation.
 *
 * See min_min_bus_gdbus_proxy_new_for_bus_sync() for the synchronous, blocking version of this constructor.
 */
void
min_min_bus_gdbus_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data)
{
  g_async_initable_new_async (MIN_MIN_BUS_TYPE_GDBUS_PROXY, G_PRIORITY_DEFAULT, cancellable, callback, user_data, "g-flags", flags, "g-name", name, "g-bus-type", bus_type, "g-object-path", object_path, "g-interface-name", "com.fatminmin.GDBUS", NULL);
}

/**
 * min_min_bus_gdbus_proxy_new_for_bus_finish:
 * @res: The #GAsyncResult obtained from the #GAsyncReadyCallback passed to min_min_bus_gdbus_proxy_new_for_bus().
 * @error: Return location for error or %NULL
 *
 * Finishes an operation started with min_min_bus_gdbus_proxy_new_for_bus().
 *
 * Returns: (transfer full) (type MinMinBusGDBUSProxy): The constructed proxy object or %NULL if @error is set.
 */
MinMinBusGDBUS *
min_min_bus_gdbus_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error)
{
  GObject *ret;
  GObject *source_object;
  source_object = g_async_result_get_source_object (res);
  ret = g_async_initable_new_finish (G_ASYNC_INITABLE (source_object), res, error);
  g_object_unref (source_object);
  if (ret != NULL)
    return MIN_MIN_BUS_GDBUS (ret);
  else
    return NULL;
}

/**
 * min_min_bus_gdbus_proxy_new_for_bus_sync:
 * @bus_type: A #GBusType.
 * @flags: Flags from the #GDBusProxyFlags enumeration.
 * @name: A bus name (well-known or unique).
 * @object_path: An object path.
 * @cancellable: (allow-none): A #GCancellable or %NULL.
 * @error: Return location for error or %NULL
 *
 * Like min_min_bus_gdbus_proxy_new_sync() but takes a #GBusType instead of a #GDBusConnection.
 *
 * The calling thread is blocked until a reply is received.
 *
 * See min_min_bus_gdbus_proxy_new_for_bus() for the asynchronous version of this constructor.
 *
 * Returns: (transfer full) (type MinMinBusGDBUSProxy): The constructed proxy object or %NULL if @error is set.
 */
MinMinBusGDBUS *
min_min_bus_gdbus_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error)
{
  GInitable *ret;
  ret = g_initable_new (MIN_MIN_BUS_TYPE_GDBUS_PROXY, cancellable, error, "g-flags", flags, "g-name", name, "g-bus-type", bus_type, "g-object-path", object_path, "g-interface-name", "com.fatminmin.GDBUS", NULL);
  if (ret != NULL)
    return MIN_MIN_BUS_GDBUS (ret);
  else
    return NULL;
}


/* ------------------------------------------------------------------------ */

/**
 * MinMinBusGDBUSSkeleton:
 *
 * The #MinMinBusGDBUSSkeleton structure contains only private data and should only be accessed using the provided API.
 */

/**
 * MinMinBusGDBUSSkeletonClass:
 * @parent_class: The parent class.
 *
 * Class structure for #MinMinBusGDBUSSkeleton.
 */

struct _MinMinBusGDBUSSkeletonPrivate
{
  GValue *properties;
  GList *changed_properties;
  GSource *changed_properties_idle_source;
  GMainContext *context;
  GMutex lock;
};

static void
_min_min_bus_gdbus_skeleton_handle_method_call (
  GDBusConnection *connection G_GNUC_UNUSED,
  const gchar *sender G_GNUC_UNUSED,
  const gchar *object_path G_GNUC_UNUSED,
  const gchar *interface_name,
  const gchar *method_name,
  GVariant *parameters,
  GDBusMethodInvocation *invocation,
  gpointer user_data)
{
  MinMinBusGDBUSSkeleton *skeleton = MIN_MIN_BUS_GDBUS_SKELETON (user_data);
  _ExtendedGDBusMethodInfo *info;
  GVariantIter iter;
  GVariant *child;
  GValue *paramv;
  guint num_params;
  guint num_extra;
  guint n;
  guint signal_id;
  GValue return_value = G_VALUE_INIT;
  info = (_ExtendedGDBusMethodInfo *) g_dbus_method_invocation_get_method_info (invocation);
  g_assert (info != NULL);
  num_params = g_variant_n_children (parameters);
  num_extra = info->pass_fdlist ? 3 : 2;  paramv = g_new0 (GValue, num_params + num_extra);
  n = 0;
  g_value_init (&paramv[n], MIN_MIN_BUS_TYPE_GDBUS);
  g_value_set_object (&paramv[n++], skeleton);
  g_value_init (&paramv[n], G_TYPE_DBUS_METHOD_INVOCATION);
  g_value_set_object (&paramv[n++], invocation);
  if (info->pass_fdlist)
    {
#ifdef G_OS_UNIX
      g_value_init (&paramv[n], G_TYPE_UNIX_FD_LIST);
      g_value_set_object (&paramv[n++], g_dbus_message_get_unix_fd_list (g_dbus_method_invocation_get_message (invocation)));
#else
      g_assert_not_reached ();
#endif
    }
  g_variant_iter_init (&iter, parameters);
  while ((child = g_variant_iter_next_value (&iter)) != NULL)
    {
      _ExtendedGDBusArgInfo *arg_info = (_ExtendedGDBusArgInfo *) info->parent_struct.in_args[n - num_extra];
      if (arg_info->use_gvariant)
        {
          g_value_init (&paramv[n], G_TYPE_VARIANT);
          g_value_set_variant (&paramv[n], child);
          n++;
        }
      else
        g_dbus_gvariant_to_gvalue (child, &paramv[n++]);
      g_variant_unref (child);
    }
  signal_id = g_signal_lookup (info->signal_name, MIN_MIN_BUS_TYPE_GDBUS);
  g_value_init (&return_value, G_TYPE_BOOLEAN);
  g_signal_emitv (paramv, signal_id, 0, &return_value);
  if (!g_value_get_boolean (&return_value))
    g_dbus_method_invocation_return_error (invocation, G_DBUS_ERROR, G_DBUS_ERROR_UNKNOWN_METHOD, "Method %s is not implemented on interface %s", method_name, interface_name);
  g_value_unset (&return_value);
  for (n = 0; n < num_params + num_extra; n++)
    g_value_unset (&paramv[n]);
  g_free (paramv);
}

static GVariant *
_min_min_bus_gdbus_skeleton_handle_get_property (
  GDBusConnection *connection G_GNUC_UNUSED,
  const gchar *sender G_GNUC_UNUSED,
  const gchar *object_path G_GNUC_UNUSED,
  const gchar *interface_name G_GNUC_UNUSED,
  const gchar *property_name,
  GError **error,
  gpointer user_data)
{
  MinMinBusGDBUSSkeleton *skeleton = MIN_MIN_BUS_GDBUS_SKELETON (user_data);
  GValue value = G_VALUE_INIT;
  GParamSpec *pspec;
  _ExtendedGDBusPropertyInfo *info;
  GVariant *ret;
  ret = NULL;
  info = (_ExtendedGDBusPropertyInfo *) g_dbus_interface_info_lookup_property ((GDBusInterfaceInfo *) &_min_min_bus_gdbus_interface_info.parent_struct, property_name);
  g_assert (info != NULL);
  pspec = g_object_class_find_property (G_OBJECT_GET_CLASS (skeleton), info->hyphen_name);
  if (pspec == NULL)
    {
      g_set_error (error, G_DBUS_ERROR, G_DBUS_ERROR_INVALID_ARGS, "No property with name %s", property_name);
    }
  else
    {
      g_value_init (&value, pspec->value_type);
      g_object_get_property (G_OBJECT (skeleton), info->hyphen_name, &value);
      ret = g_dbus_gvalue_to_gvariant (&value, G_VARIANT_TYPE (info->parent_struct.signature));
      g_value_unset (&value);
    }
  return ret;
}

static gboolean
_min_min_bus_gdbus_skeleton_handle_set_property (
  GDBusConnection *connection G_GNUC_UNUSED,
  const gchar *sender G_GNUC_UNUSED,
  const gchar *object_path G_GNUC_UNUSED,
  const gchar *interface_name G_GNUC_UNUSED,
  const gchar *property_name,
  GVariant *variant,
  GError **error,
  gpointer user_data)
{
  MinMinBusGDBUSSkeleton *skeleton = MIN_MIN_BUS_GDBUS_SKELETON (user_data);
  GValue value = G_VALUE_INIT;
  GParamSpec *pspec;
  _ExtendedGDBusPropertyInfo *info;
  gboolean ret;
  ret = FALSE;
  info = (_ExtendedGDBusPropertyInfo *) g_dbus_interface_info_lookup_property ((GDBusInterfaceInfo *) &_min_min_bus_gdbus_interface_info.parent_struct, property_name);
  g_assert (info != NULL);
  pspec = g_object_class_find_property (G_OBJECT_GET_CLASS (skeleton), info->hyphen_name);
  if (pspec == NULL)
    {
      g_set_error (error, G_DBUS_ERROR, G_DBUS_ERROR_INVALID_ARGS, "No property with name %s", property_name);
    }
  else
    {
      if (info->use_gvariant)
        g_value_set_variant (&value, variant);
      else
        g_dbus_gvariant_to_gvalue (variant, &value);
      g_object_set_property (G_OBJECT (skeleton), info->hyphen_name, &value);
      g_value_unset (&value);
      ret = TRUE;
    }
  return ret;
}

static const GDBusInterfaceVTable _min_min_bus_gdbus_skeleton_vtable =
{
  _min_min_bus_gdbus_skeleton_handle_method_call,
  _min_min_bus_gdbus_skeleton_handle_get_property,
  _min_min_bus_gdbus_skeleton_handle_set_property,
  {NULL}
};

static GDBusInterfaceInfo *
min_min_bus_gdbus_skeleton_dbus_interface_get_info (GDBusInterfaceSkeleton *skeleton G_GNUC_UNUSED)
{
  return min_min_bus_gdbus_interface_info ();
}

static GDBusInterfaceVTable *
min_min_bus_gdbus_skeleton_dbus_interface_get_vtable (GDBusInterfaceSkeleton *skeleton G_GNUC_UNUSED)
{
  return (GDBusInterfaceVTable *) &_min_min_bus_gdbus_skeleton_vtable;
}

static GVariant *
min_min_bus_gdbus_skeleton_dbus_interface_get_properties (GDBusInterfaceSkeleton *_skeleton)
{
  MinMinBusGDBUSSkeleton *skeleton = MIN_MIN_BUS_GDBUS_SKELETON (_skeleton);

  GVariantBuilder builder;
  guint n;
  g_variant_builder_init (&builder, G_VARIANT_TYPE ("a{sv}"));
  if (_min_min_bus_gdbus_interface_info.parent_struct.properties == NULL)
    goto out;
  for (n = 0; _min_min_bus_gdbus_interface_info.parent_struct.properties[n] != NULL; n++)
    {
      GDBusPropertyInfo *info = _min_min_bus_gdbus_interface_info.parent_struct.properties[n];
      if (info->flags & G_DBUS_PROPERTY_INFO_FLAGS_READABLE)
        {
          GVariant *value;
          value = _min_min_bus_gdbus_skeleton_handle_get_property (g_dbus_interface_skeleton_get_connection (G_DBUS_INTERFACE_SKELETON (skeleton)), NULL, g_dbus_interface_skeleton_get_object_path (G_DBUS_INTERFACE_SKELETON (skeleton)), "com.fatminmin.GDBUS", info->name, NULL, skeleton);
          if (value != NULL)
            {
              g_variant_take_ref (value);
              g_variant_builder_add (&builder, "{sv}", info->name, value);
              g_variant_unref (value);
            }
        }
    }
out:
  return g_variant_builder_end (&builder);
}

static void
min_min_bus_gdbus_skeleton_dbus_interface_flush (GDBusInterfaceSkeleton *_skeleton)
{
}

static void min_min_bus_gdbus_skeleton_iface_init (MinMinBusGDBUSIface *iface);
#if GLIB_VERSION_MAX_ALLOWED >= GLIB_VERSION_2_38
G_DEFINE_TYPE_WITH_CODE (MinMinBusGDBUSSkeleton, min_min_bus_gdbus_skeleton, G_TYPE_DBUS_INTERFACE_SKELETON,
                         G_ADD_PRIVATE (MinMinBusGDBUSSkeleton)
                         G_IMPLEMENT_INTERFACE (MIN_MIN_BUS_TYPE_GDBUS, min_min_bus_gdbus_skeleton_iface_init));

#else
G_DEFINE_TYPE_WITH_CODE (MinMinBusGDBUSSkeleton, min_min_bus_gdbus_skeleton, G_TYPE_DBUS_INTERFACE_SKELETON,
                         G_IMPLEMENT_INTERFACE (MIN_MIN_BUS_TYPE_GDBUS, min_min_bus_gdbus_skeleton_iface_init));

#endif
static void
min_min_bus_gdbus_skeleton_finalize (GObject *object)
{
  MinMinBusGDBUSSkeleton *skeleton = MIN_MIN_BUS_GDBUS_SKELETON (object);
  g_list_free_full (skeleton->priv->changed_properties, (GDestroyNotify) _changed_property_free);
  if (skeleton->priv->changed_properties_idle_source != NULL)
    g_source_destroy (skeleton->priv->changed_properties_idle_source);
  g_main_context_unref (skeleton->priv->context);
  g_mutex_clear (&skeleton->priv->lock);
  G_OBJECT_CLASS (min_min_bus_gdbus_skeleton_parent_class)->finalize (object);
}

static void
min_min_bus_gdbus_skeleton_init (MinMinBusGDBUSSkeleton *skeleton)
{
#if GLIB_VERSION_MAX_ALLOWED >= GLIB_VERSION_2_38
  skeleton->priv = min_min_bus_gdbus_skeleton_get_instance_private (skeleton);
#else
  skeleton->priv = G_TYPE_INSTANCE_GET_PRIVATE (skeleton, MIN_MIN_BUS_TYPE_GDBUS_SKELETON, MinMinBusGDBUSSkeletonPrivate);
#endif

  g_mutex_init (&skeleton->priv->lock);
  skeleton->priv->context = g_main_context_ref_thread_default ();
}

static void
min_min_bus_gdbus_skeleton_class_init (MinMinBusGDBUSSkeletonClass *klass)
{
  GObjectClass *gobject_class;
  GDBusInterfaceSkeletonClass *skeleton_class;

  gobject_class = G_OBJECT_CLASS (klass);
  gobject_class->finalize = min_min_bus_gdbus_skeleton_finalize;

  skeleton_class = G_DBUS_INTERFACE_SKELETON_CLASS (klass);
  skeleton_class->get_info = min_min_bus_gdbus_skeleton_dbus_interface_get_info;
  skeleton_class->get_properties = min_min_bus_gdbus_skeleton_dbus_interface_get_properties;
  skeleton_class->flush = min_min_bus_gdbus_skeleton_dbus_interface_flush;
  skeleton_class->get_vtable = min_min_bus_gdbus_skeleton_dbus_interface_get_vtable;

#if GLIB_VERSION_MAX_ALLOWED < GLIB_VERSION_2_38
  g_type_class_add_private (klass, sizeof (MinMinBusGDBUSSkeletonPrivate));
#endif
}

static void
min_min_bus_gdbus_skeleton_iface_init (MinMinBusGDBUSIface *iface)
{
}

/**
 * min_min_bus_gdbus_skeleton_new:
 *
 * Creates a skeleton object for the D-Bus interface <link linkend="gdbus-interface-com-fatminmin-GDBUS.top_of_page">com.fatminmin.GDBUS</link>.
 *
 * Returns: (transfer full) (type MinMinBusGDBUSSkeleton): The skeleton object.
 */
MinMinBusGDBUS *
min_min_bus_gdbus_skeleton_new (void)
{
  return MIN_MIN_BUS_GDBUS (g_object_new (MIN_MIN_BUS_TYPE_GDBUS_SKELETON, NULL));
}
