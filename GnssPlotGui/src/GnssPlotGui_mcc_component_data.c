/*
 * MATLAB Compiler: 4.9 (R2008b)
 * Date: Fri Sep 22 20:34:19 2017
 * Arguments: "-B" "macro_default" "-o" "GnssPlotGui" "-W"
 * "WinMain:GnssPlotGui" "-d"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\GnssPlotGui\src" "-T"
 * "link:exe" "-v" "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\gnssplot.m"
 * "-a" "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\optdui.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\readpos_phi_lamda.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\readpos.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\legend.png" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\readsat_new.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\readsat.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\logo.PNG" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\graph.png" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\setnames.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\satnm.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\readaspos.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\readstat.m" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\folder.jpg" "-a"
 * "C:\Users\acer\Desktop\dsk_exe\GNSS_PLOT_GUI\plot_google_map.m" 
 */

#include "mclmcrrt.h"

#ifdef __cplusplus
extern "C" {
#endif
const unsigned char __MCC_GnssPlotGui_session_key[] = {
    'C', '2', 'E', '3', '7', 'B', 'D', 'E', '9', 'F', 'E', '9', 'A', 'D', '1',
    '4', '0', '7', '6', '7', '7', '3', 'B', '4', 'B', '2', '0', '6', '3', 'A',
    'D', 'B', 'F', '8', 'D', '2', 'A', 'E', '4', '1', 'C', '4', 'E', '2', '2',
    '0', 'F', 'D', '9', 'D', '5', 'E', 'B', '1', 'B', '0', 'E', 'F', 'E', '9',
    '1', 'B', 'D', 'C', '1', '1', '0', '0', '0', '6', '1', 'D', '0', '8', '0',
    'F', '3', '5', '0', '7', '4', '3', 'A', '7', 'B', 'A', '7', '6', '5', '2',
    '9', '8', 'C', 'D', '7', 'E', '5', '8', '5', 'E', '6', 'F', '4', 'A', '0',
    '9', '8', '2', '4', 'D', '2', 'F', '8', 'B', '3', 'C', '4', 'F', 'C', 'E',
    'E', 'A', '9', '1', 'A', 'E', '3', 'A', '9', '8', '0', '1', 'D', '1', '9',
    'E', '6', 'D', '0', 'A', '2', 'A', '7', '4', '2', '8', '2', '5', '5', '6',
    '5', 'A', 'E', '0', '6', '7', '1', 'F', '8', 'D', '9', 'F', 'D', '6', 'B',
    '9', '2', '2', 'A', 'A', '0', '5', '6', 'D', '9', 'F', '4', '3', 'C', 'C',
    '8', '1', '3', '0', 'E', '0', '9', '1', 'F', '4', 'F', '9', 'D', '9', '1',
    '9', '0', '3', 'F', '0', '0', 'F', '2', '6', '9', 'A', '0', 'B', '2', 'F',
    '0', 'F', '6', 'D', '9', 'D', 'F', 'B', 'A', 'D', 'D', '8', 'D', 'E', 'B',
    'D', '5', 'C', 'B', 'E', '9', '2', '7', 'A', '4', 'B', 'D', '2', 'F', '7',
    '9', '5', 'B', 'B', 'A', '5', '1', 'D', 'D', '6', 'E', '2', '0', 'F', 'A',
    '7', '\0'};

const unsigned char __MCC_GnssPlotGui_public_key[] = {
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

static const char * MCC_GnssPlotGui_matlabpath_data[] = 
  { "GnssPlotGui/", "$TOOLBOXDEPLOYDIR/", "$TOOLBOXMATLABDIR/general/",
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

static const char * MCC_GnssPlotGui_classpath_data[] = 
  { "java/jar/toolbox/images.jar" };

static const char * MCC_GnssPlotGui_libpath_data[] = 
  { "" };

static const char * MCC_GnssPlotGui_app_opts_data[] = 
  { "" };

static const char * MCC_GnssPlotGui_run_opts_data[] = 
  { "" };

static const char * MCC_GnssPlotGui_warning_state_data[] = 
  { "off:MATLAB:dispatcher:nameConflict" };


mclComponentData __MCC_GnssPlotGui_component_data = { 

  /* Public key data */
  __MCC_GnssPlotGui_public_key,

  /* Component name */
  "GnssPlotGui",

  /* Component Root */
  "",

  /* Application key data */
  __MCC_GnssPlotGui_session_key,

  /* Component's MATLAB Path */
  MCC_GnssPlotGui_matlabpath_data,

  /* Number of directories in the MATLAB Path */
  45,

  /* Component's Java class path */
  MCC_GnssPlotGui_classpath_data,
  /* Number of directories in the Java class path */
  1,

  /* Component's load library path (for extra shared libraries) */
  MCC_GnssPlotGui_libpath_data,
  /* Number of directories in the load library path */
  0,

  /* MCR instance-specific runtime options */
  MCC_GnssPlotGui_app_opts_data,
  /* Number of MCR instance-specific runtime options */
  0,

  /* MCR global runtime options */
  MCC_GnssPlotGui_run_opts_data,
  /* Number of MCR global runtime options */
  0,
  
  /* Component preferences directory */
  "GnssPlotGui_C8C9288429F33CB239B9A2296FE14756",

  /* MCR warning status data */
  MCC_GnssPlotGui_warning_state_data,
  /* Number of MCR warning status modifiers */
  1,

  /* Path to component - evaluated at runtime */
  NULL

};

#ifdef __cplusplus
}
#endif


