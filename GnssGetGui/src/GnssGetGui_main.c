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

#include <stdio.h>
#include "mclmcrrt.h"
#ifdef __cplusplus
extern "C" {
#endif

extern mclComponentData __MCC_GnssGetGui_component_data;

#ifdef __cplusplus
}
#endif

static HMCRINSTANCE _mcr_inst = NULL;


#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultPrintHandler(const char *s)
{
  return mclWrite(1 /* stdout */, s, sizeof(char)*strlen(s));
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultErrorHandler(const char *s)
{
  int written = 0;
  size_t len = 0;
  len = strlen(s);
  written = mclWrite(2 /* stderr */, s, sizeof(char)*len);
  if (len > 0 && s[ len-1 ] != '\n')
    written += mclWrite(2 /* stderr */, "\n", sizeof(char));
  return written;
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_GnssGetGui_C_API 
#define LIB_GnssGetGui_C_API /* No special import/export declaration */
#endif

LIB_GnssGetGui_C_API 
bool MW_CALL_CONV GnssGetGuiInitializeWithHandlers(
    mclOutputHandlerFcn error_handler,
    mclOutputHandlerFcn print_handler
)
{
  if (_mcr_inst != NULL)
    return true;
  if (!mclmcrInitialize())
    return false;
  if (!mclInitializeComponentInstanceWithEmbeddedCTF(&_mcr_inst,
                                                     &__MCC_GnssGetGui_component_data,
                                                     true, NoObjectType,
                                                     ExeTarget, error_handler,
                                                     print_handler, 1105303, NULL))
    return false;
  return true;
}

LIB_GnssGetGui_C_API 
bool MW_CALL_CONV GnssGetGuiInitialize(void)
{
  return GnssGetGuiInitializeWithHandlers(mclDefaultErrorHandler,
                                          mclDefaultPrintHandler);
}

LIB_GnssGetGui_C_API 
void MW_CALL_CONV GnssGetGuiTerminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

int run_main(int argc, const char **argv)
{
  int _retval;
  /* Generate and populate the path_to_component. */
  char path_to_component[(PATH_MAX*2)+1];
  separatePathName(argv[0], path_to_component, (PATH_MAX*2)+1);
  __MCC_GnssGetGui_component_data.path_to_component = path_to_component; 
  if (!GnssGetGuiInitialize()) {
    return -1;
  }
  argc = mclSetCmdLineUserData(mclGetID(_mcr_inst), argc, argv);
  _retval = mclMain(_mcr_inst, argc, argv, "gnssget", 0);
  if (_retval == 0 /* no error */) mclWaitForFiguresToDie(NULL);
  GnssGetGuiTerminate();
#if defined( _MSC_VER)
  PostQuitMessage(0);
#endif
  mclTerminateApplication();
  return _retval;
}

#if defined( _MSC_VER)

#define argc __argc
#define argv __argv

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
#else
int main(int argc, const char **argv)

#endif
{
  if (!mclInitializeApplication(
    __MCC_GnssGetGui_component_data.runtime_options,
    __MCC_GnssGetGui_component_data.runtime_option_count))
    return 0;
  
  return mclRunMain(run_main, argc, argv);
}
