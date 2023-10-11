/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/GTAmodding/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#ifdef GTASA
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US 
#define SUPPORTED_10EU 
#define SUPPORTED_10US_10EU 
#define SUPPORTED_11US 
#define SUPPORTED_10US_11US 
#define SUPPORTED_10EU_11US 
#define SUPPORTED_10US_10EU_11US 
#define SUPPORTED_11EU 
#define SUPPORTED_10US_11EU 
#define SUPPORTED_10EU_11EU 
#define SUPPORTED_10US_10EU_11EU 
#define SUPPORTED_11US_11EU 
#define SUPPORTED_10US_11US_11EU 
#define SUPPORTED_10EU_11US_11EU 
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2 
#define SUPPORTED_10US_SR2 
#define SUPPORTED_10EU_SR2 
#define SUPPORTED_10US_10EU_SR2 
#define SUPPORTED_11US_SR2 
#define SUPPORTED_10US_11US_SR2 
#define SUPPORTED_10EU_11US_SR2 
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2 
#define SUPPORTED_10US_11EU_SR2 
#define SUPPORTED_10EU_11EU_SR2 
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2 
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV 
#define SUPPORTED_10US_SR2LV 
#define SUPPORTED_10EU_SR2LV 
#define SUPPORTED_10US_10EU_SR2LV 
#define SUPPORTED_11US_SR2LV 
#define SUPPORTED_10US_11US_SR2LV 
#define SUPPORTED_10EU_11US_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV 
#define SUPPORTED_10US_11EU_SR2LV 
#define SUPPORTED_10EU_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV 
#define SUPPORTED_10US_SR2_SR2LV 
#define SUPPORTED_10EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV 
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US 
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU 
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US 
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US 
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU 
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU 
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU 
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_SR2 
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2 
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2 
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2 
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_SR2LV 
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV 
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV 
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV 
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV 
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU 
#define SUPPORTED_10US_10EU 
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US 
#define SUPPORTED_10US_10EU_11US 
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU 
#define SUPPORTED_10US_10EU_11EU 
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU 
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2 
#define SUPPORTED_10US_10EU_SR2 
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2 
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2 
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV 
#define SUPPORTED_10US_10EU_SR2LV 
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU 
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US 
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU 
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2 
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV 
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US 
#define SUPPORTED_10US_11US 
#define SUPPORTED_10EU_11US 
#define SUPPORTED_10US_10EU_11US 
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU 
#define SUPPORTED_10US_11US_11EU 
#define SUPPORTED_10EU_11US_11EU 
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2 
#define SUPPORTED_10US_11US_SR2 
#define SUPPORTED_10EU_11US_SR2 
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2 
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2LV 
#define SUPPORTED_10US_11US_SR2LV 
#define SUPPORTED_10EU_11US_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV 
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US 
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US 
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU 
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2 
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV 
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US 
#define SUPPORTED_10US_10EU_11US 
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU 
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2 
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US 
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU 
#define SUPPORTED_10US_11EU 
#define SUPPORTED_10EU_11EU 
#define SUPPORTED_10US_10EU_11EU 
#define SUPPORTED_11US_11EU 
#define SUPPORTED_10US_11US_11EU 
#define SUPPORTED_10EU_11US_11EU 
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2 
#define SUPPORTED_10US_11EU_SR2 
#define SUPPORTED_10EU_11EU_SR2 
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2 
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV 
#define SUPPORTED_10US_11EU_SR2LV 
#define SUPPORTED_10EU_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU 
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU 
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU 
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2 
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV 
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU 
#define SUPPORTED_10US_10EU_11EU 
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU 
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2 
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU 
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU 
#define SUPPORTED_10US_11US_11EU 
#define SUPPORTED_10EU_11US_11EU 
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2 
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU 
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU 
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU 
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2 
#define SUPPORTED_10US_SR2 
#define SUPPORTED_10EU_SR2 
#define SUPPORTED_10US_10EU_SR2 
#define SUPPORTED_11US_SR2 
#define SUPPORTED_10US_11US_SR2 
#define SUPPORTED_10EU_11US_SR2 
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2 
#define SUPPORTED_10US_11EU_SR2 
#define SUPPORTED_10EU_11EU_SR2 
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2 
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV 
#define SUPPORTED_10US_SR2_SR2LV 
#define SUPPORTED_10EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV 
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_SR2 
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2 
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2 
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2 
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV 
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2 
#define SUPPORTED_10US_10EU_SR2 
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2 
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2 
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2 
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2 
#define SUPPORTED_10US_11US_SR2 
#define SUPPORTED_10EU_11US_SR2 
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2 
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV 
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2 
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2 
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2 
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2 
#define SUPPORTED_10US_11EU_SR2 
#define SUPPORTED_10EU_11EU_SR2 
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2 
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2 
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2 
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2 
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2 
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2 
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2 
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && !defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2 
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV 
#define SUPPORTED_10US_SR2LV 
#define SUPPORTED_10EU_SR2LV 
#define SUPPORTED_10US_10EU_SR2LV 
#define SUPPORTED_11US_SR2LV 
#define SUPPORTED_10US_11US_SR2LV 
#define SUPPORTED_10EU_11US_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV 
#define SUPPORTED_10US_11EU_SR2LV 
#define SUPPORTED_10EU_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV 
#define SUPPORTED_10US_SR2_SR2LV 
#define SUPPORTED_10EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV 
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_SR2LV 
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV 
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV 
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV 
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV 
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV 
#define SUPPORTED_10US_10EU_SR2LV 
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV 
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2LV 
#define SUPPORTED_10US_11US_SR2LV 
#define SUPPORTED_10EU_11US_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV 
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV 
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV 
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV 
#define SUPPORTED_10US_11EU_SR2LV 
#define SUPPORTED_10EU_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV 
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV 
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && !defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV 
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV 
#define SUPPORTED_10US_SR2_SR2LV 
#define SUPPORTED_10EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV 
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV 
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV 
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV 
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV 
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && !defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV 
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && !defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV 
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && !defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if !defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV 
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#if defined(PLUGIN_SGV_10US) && defined(PLUGIN_SGV_10EU) && defined(PLUGIN_SGV_11US) && defined(PLUGIN_SGV_11EU) && defined(PLUGIN_SGV_SR2) && defined(PLUGIN_SGV_SR2LV)
#define SUPPORTED_10US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2-LV' exe is not supported")]]
#define SUPPORTED_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 'NewSteam R2' exe is not supported")]]
#define SUPPORTED_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EU exe is not supported")]]
#define SUPPORTED_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.01 US exe is not supported")]]
#define SUPPORTED_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10US_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EU exe is not supported")]]
#define SUPPORTED_10EU_11US_11EU_SR2_SR2LV  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 US exe is not supported")]]
#define SUPPORTED_10US_10EU_11US_11EU_SR2_SR2LV 
#endif
#elif GTA2
#define SUPPORTED_9600EN 
#elif GTAIV
#define SUPPORTED_CE
#else
#if !defined(PLUGIN_SGV_10EN) && !defined(PLUGIN_SGV_11EN) && !defined(PLUGIN_SGV_STEAM)
#define SUPPORTED_10EN 
#define SUPPORTED_11EN 
#define SUPPORTED_10EN_11EN 
#define SUPPORTED_STEAM 
#define SUPPORTED_10EN_STEAM 
#define SUPPORTED_11EN_STEAM 
#define SUPPORTED_10EN_11EN_STEAM 
#endif
#if defined(PLUGIN_SGV_10EN) && !defined(PLUGIN_SGV_11EN) && !defined(PLUGIN_SGV_STEAM)
#define SUPPORTED_10EN 
#define SUPPORTED_11EN  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported")]]
#define SUPPORTED_10EN_11EN 
#define SUPPORTED_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported")]]
#define SUPPORTED_10EN_STEAM 
#define SUPPORTED_11EN_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported")]]
#define SUPPORTED_10EN_11EN_STEAM 
#endif
#if !defined(PLUGIN_SGV_10EN) && defined(PLUGIN_SGV_11EN) && !defined(PLUGIN_SGV_STEAM)
#define SUPPORTED_10EN  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EN exe is not supported")]]
#define SUPPORTED_11EN 
#define SUPPORTED_10EN_11EN 
#define SUPPORTED_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EN exe is not supported")]]
#define SUPPORTED_10EN_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EN exe is not supported")]]
#define SUPPORTED_11EN_STEAM 
#define SUPPORTED_10EN_11EN_STEAM 
#endif
#if defined(PLUGIN_SGV_10EN) && defined(PLUGIN_SGV_11EN) && !defined(PLUGIN_SGV_STEAM)
#define SUPPORTED_10EN  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EN exe is not supported")]]
#define SUPPORTED_11EN  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported")]]
#define SUPPORTED_10EN_11EN 
#define SUPPORTED_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported\n    usage for 1.1 EN exe is not supported")]]
#define SUPPORTED_10EN_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EN exe is not supported")]]
#define SUPPORTED_11EN_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported")]]
#define SUPPORTED_10EN_11EN_STEAM 
#endif
#if !defined(PLUGIN_SGV_10EN) && !defined(PLUGIN_SGV_11EN) && defined(PLUGIN_SGV_STEAM)
#define SUPPORTED_10EN  [[deprecated("not all .exe versions are supported:\n    usage for Steam exe is not supported")]]
#define SUPPORTED_11EN  [[deprecated("not all .exe versions are supported:\n    usage for Steam exe is not supported")]]
#define SUPPORTED_10EN_11EN  [[deprecated("not all .exe versions are supported:\n    usage for Steam exe is not supported")]]
#define SUPPORTED_STEAM 
#define SUPPORTED_10EN_STEAM 
#define SUPPORTED_11EN_STEAM 
#define SUPPORTED_10EN_11EN_STEAM 
#endif
#if defined(PLUGIN_SGV_10EN) && !defined(PLUGIN_SGV_11EN) && defined(PLUGIN_SGV_STEAM)
#define SUPPORTED_10EN  [[deprecated("not all .exe versions are supported:\n    usage for Steam exe is not supported")]]
#define SUPPORTED_11EN  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported\n    usage for Steam exe is not supported")]]
#define SUPPORTED_10EN_11EN  [[deprecated("not all .exe versions are supported:\n    usage for Steam exe is not supported")]]
#define SUPPORTED_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported")]]
#define SUPPORTED_10EN_STEAM 
#define SUPPORTED_11EN_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported")]]
#define SUPPORTED_10EN_11EN_STEAM 
#endif
#if !defined(PLUGIN_SGV_10EN) && defined(PLUGIN_SGV_11EN) && defined(PLUGIN_SGV_STEAM)
#define SUPPORTED_10EN  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EN exe is not supported\n    usage for Steam exe is not supported")]]
#define SUPPORTED_11EN  [[deprecated("not all .exe versions are supported:\n    usage for Steam exe is not supported")]]
#define SUPPORTED_10EN_11EN  [[deprecated("not all .exe versions are supported:\n    usage for Steam exe is not supported")]]
#define SUPPORTED_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EN exe is not supported")]]
#define SUPPORTED_10EN_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EN exe is not supported")]]
#define SUPPORTED_11EN_STEAM 
#define SUPPORTED_10EN_11EN_STEAM 
#endif
#if defined(PLUGIN_SGV_10EN) && defined(PLUGIN_SGV_11EN) && defined(PLUGIN_SGV_STEAM)
#define SUPPORTED_10EN  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EN exe is not supported\n    usage for Steam exe is not supported")]]
#define SUPPORTED_11EN  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported\n    usage for Steam exe is not supported")]]
#define SUPPORTED_10EN_11EN  [[deprecated("not all .exe versions are supported:\n    usage for Steam exe is not supported")]]
#define SUPPORTED_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported\n    usage for 1.1 EN exe is not supported")]]
#define SUPPORTED_10EN_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.1 EN exe is not supported")]]
#define SUPPORTED_11EN_STEAM  [[deprecated("not all .exe versions are supported:\n    usage for 1.0 EN exe is not supported")]]
#define SUPPORTED_10EN_11EN_STEAM 
#endif
#endif
