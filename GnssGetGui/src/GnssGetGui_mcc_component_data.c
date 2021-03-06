/*
 * MATLAB Compiler: 4.9 (R2008b)
 * Date: Fri Sep 22 21:13:56 2017
 * Arguments: "-B" "macro_default" "-o" "GnssGetGui" "-W" "WinMain:GnssGetGui"
 * "-d" "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\GnssGetGui\src" "-T"
 * "link:exe" "-v" "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\gnssget.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\uigetdate.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\ST_NOANET_2_2.txt" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\ST_NOANET_2_1.txt" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\ask3.jpg" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\info.jpg" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\folder.jpg" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\stco.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\ST_MGEX_2_2.txt" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\ST_MGEX_2_1.txt" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\ST_EUREF_2_2.txt" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\ST_EUREF_2_1.txt" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\ST_IGS_2_2.txt" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\ST_IGS_2_1.txt" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_GET_GUI\gpsdate.m" 
 */

#include "mclmcrrt.h"

#ifdef __cplusplus
extern "C" {
#endif
const unsigned char __MCC_GnssGetGui_session_key[] = {
    '8', '7', '0', '4', '1', 'F', 'F', 'D', '6', '4', '9', 'C', '0', 'A', '1',
    '3', 'D', '3', 'B', 'C', '9', '3', '6', 'F', 'A', '9', '1', 'B', '2', 'F',
    '2', '5', 'A', '5', 'C', '2', '3', '8', '2', '3', 'E', '0', '4', 'E', 'D',
    '4', '3', '0', 'D', 'F', 'B', '9', '9', '6', '9', 'E', '8', '9', '6', '4',
    '0', 'D', 'B', '7', 'A', '6', '8', '3', '8', '5', 'D', '6', '1', '0', 'F',
    'C', '9', '4', '8', '9', 'B', '5', '5', 'E', '0', 'A', '7', 'E', '2', '5',
    'A', '5', '3', '9', '6', 'E', '3', '9', '7', 'F', '8', '8', 'B', '8', '0',
    '0', '9', '0', '7', '3', 'E', 'C', '1', '1', '8', '5', '4', '4', 'C', '2',
    'F', '1', '5', 'F', '3', '8', '8', '4', 'C', '6', 'C', 'B', '3', '9', '2',
    '1', 'B', '5', '6', '3', '6', '5', '2', '9', 'C', '0', '2', '7', '8', 'B',
    '4', '6', '5', 'B', '1', 'B', '9', '3', '4', '1', 'C', '7', '6', 'C', 'D',
    '7', '1', 'E', '2', 'D', '7', 'D', '4', '3', '5', '9', 'B', 'F', 'B', 'D',
    'F', '0', '8', 'F', 'C', '7', 'A', 'D', 'B', 'C', 'C', 'F', '8', '4', 'D',
    '9', 'C', 'A', '2', '1', '0', '0', 'A', '0', 'B', '4', '2', '3', 'C', 'B',
    '7', 'A', '9', '6', 'B', '4', '5', 'A', '5', '7', '7', '1', '0', 'D', '9',
    'F', '1', '7', 'D', '0', '1', '1', '8', '6', '5', '7', 'B', '0', 'A', '4',
    '5', '3', '1', '3', '5', 'E', '4', '8', '0', 'F', 'E', 'C', '8', '9', '4',
    'F', '\0'};

const unsigned char __MCC_GnssGetGui_public_key[] = {
    '3', '0', '8', '1', '9', 'D', '3', '0', '0', 'D', '0', '6', '0', '9', '2',
    'A', '8', '6', '4', '8', '8', '6', 'F', '7', '0', 'D', '0', '1', '0', '1',
    '0', '1', '0', '5', '0', '0', '0', '3', '8', '1', '8', 'B', '0', '0', '3',
    '0', '8', '1', '8', '7', '0', '2', '8', '1', '8', '1', '0', '0', 'C', '4',
    '9', 'C', 'A', 'C', '3', '4', 'E', 'D', '1', '3', 'A', '5', '2', '0', '6',
    '5', '8', 'F', '6', 'F', '8', 'E', '0', '1', '3', '8', 'C', '4', '3', '1',
    '5', 'B', '4', '3', '1', '5', '2', '7', '7', 'E', 'D', '3', 'F', '7', 'D',
    'A', 'E', '5', '3', '0', '9', '9', 'D', 'B', '0', '8', 'E', 'E', '5', '8',
    '9', 'F', '8', '0', '4', 'D', '4', 'B', '9', '8', '1', '3', '2', '6', 'A',
    '5', '2', 'C', 'C', 'E', '4', '3', '8', '2', 'E', '9', 'F', '2', 'B', '4',
    'D', '0', '8', '5', 'E', 'B', '9', '5', '0', 'C', '7', 'A', 'B', '1', '2',
    'E', 'D', 'E', '2', 'D', '4', '1', '2', '9', '7', '8', '2', '0', 'E', '6',
    '3', '7', '7', 'A', '5', 'F', 'E', 'B', '5', '6', '8', '9', 'D', '4', 'E',
    '6', '0', '3', '2', 'F', '6', '0', 'C', '4', '3', '0', '7', '4', 'A', '0',
    '4', 'C', '2', '6', 'A', 'B', '7', '2', 'F', '5', '4', 'B', '5', '1', 'B',
    'B', '4', '6', '0', '5', '7', '8', '7', '8', '5', 'B', '1', '9', '9', '0',
    '1', '4', '3', '1', '4', 'A', '6', '5', 'F', '0', '9', '0', 'B', '6', '1',
    'F', 'C', '2', '0', '1', '6', '9', '4', '5', '3', 'B', '5', '8', 'F', 'C',
    '8', 'B', 'A', '4', '3', 'E', '6', '7', '7', '6', 'E', 'B', '7', 'E', 'C',
    'D', '3', '1', '7', '8', 'B', '5', '6', 'A', 'B', '0', 'F', 'A', '0', '6',
    'D', 'D', '6', '4', '9', '6', '7', 'C', 'B', '1', '4', '9', 'E', '5', '0',
    '2', '0', '1', '1', '1', '\0'};

static const char * MCC_GnssGetGui_matlabpath_data[] = 
  { "GnssGetGui/", "$TOOLBOXDEPLOYDIR/", "$TOOLBOXMATLABDIR/general/",
    "$TOOLBOXMATLABDIR/ops/", "$TOOLBOXMATLABDIR/lang/",
    "$TOOLBOXMATLABDIR/elmat/", "$TOOLBOXMATLABDIR/randfun/",
    "$TOOLBOXMATLABDIR/elfun/", "$TOOLBOXMATLABDIR/specfun/",
    "$TOOLBOXMATLABDIR/matfun/", "$TOOLBOXMATLABDIR/datafun/",
    "$TOOLBOXMATLABDIR/polyfun/", "$TOOLBOXMATLABDIR/funfun/",
    "$TOOLBOXMATLABDIR/sparfun/", "$TOOLBOXMATLABDIR/scribe/",
    "$TOOLBOXMATLABDIR/graph2d/", "$TOOLBOXMATLABDIR/graph3d/",
    "$TOOLBOXMATLABDIR/specgraph/", "$TOOLBOXMATLABDIR/graphics/",
    "$TOOLBOXMATLABDIR/uitools/", "$TOOLBOXMATLABDIR/strfun/",
    "$TOOLBOXMATLABDIR/imagesci/", "$TOOLBOXMATLABDIR/iofun/",
    "$TOOLBOXMATLABDIR/audiovideo/", "$TOOLBOXMATLABDIR/timefun/",
    "$TOOLBOXMATLABDIR/datatypes/", "$TOOLBOXMATLABDIR/verctrl/",
    "$TOOLBOXMATLABDIR/codetools/", "$TOOLBOXMATLABDIR/helptools/",
    "$TOOLBOXMATLABDIR/winfun/", "$TOOLBOXMATLABDIR/demos/",
    "$TOOLBOXMATLABDIR/timeseries/", "$TOOLBOXMATLABDIR/hds/",
    "$TOOLBOXMATLABDIR/guide/", "$TOOLBOXMATLABDIR/plottools/",
    "toolbox/local/", "toolbox/shared/dastudio/",
    "$TOOLBOXMATLABDIR/datamanager/", "toolbox/compiler/",
    "toolbox/images/colorspaces/", "toolbox/images/images/",
    "toolbox/images/imuitools/", "toolbox/images/iptformats/",
    "toolbox/images/iptutils/", "toolbox/shared/imageslib/" };

static const char * MCC_GnssGetGui_classpath_data[] = 
  { "java/jar/toolbox/images.jar" };

static const char * MCC_GnssGetGui_libpath_data[] = 
  { "" };

static const char * MCC_GnssGetGui_app_opts_data[] = 
  { "" };

static const char * MCC_GnssGetGui_run_opts_data[] = 
  { "" };

static const char * MCC_GnssGetGui_warning_state_data[] = 
  { "off:MATLAB:dispatcher:nameConflict" };


mclComponentData __MCC_GnssGetGui_component_data = { 

  /* Public key data */
  __MCC_GnssGetGui_public_key,

  /* Component name */
  "GnssGetGui",

  /* Component Root */
  "",

  /* Application key data */
  __MCC_GnssGetGui_session_key,

  /* Component's MATLAB Path */
  MCC_GnssGetGui_matlabpath_data,

  /* Number of directories in the MATLAB Path */
  45,

  /* Component's Java class path */
  MCC_GnssGetGui_classpath_data,
  /* Number of directories in the Java class path */
  1,

  /* Component's load library path (for extra shared libraries) */
  MCC_GnssGetGui_libpath_data,
  /* Number of directories in the load library path */
  0,

  /* MCR instance-specific runtime options */
  MCC_GnssGetGui_app_opts_data,
  /* Number of MCR instance-specific runtime options */
  0,

  /* MCR global runtime options */
  MCC_GnssGetGui_run_opts_data,
  /* Number of MCR global runtime options */
  0,
  
  /* Component preferences directory */
  "GnssGetGui_B3E539F8A4FD80443A1BFD123327E6AD",

  /* MCR warning status data */
  MCC_GnssGetGui_warning_state_data,
  /* Number of MCR warning status modifiers */
  1,

  /* Path to component - evaluated at runtime */
  NULL

};

#ifdef __cplusplus
}
#endif


