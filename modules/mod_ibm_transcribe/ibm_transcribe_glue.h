#ifndef __IBM_GLUE_H__
#define __IBM_GLUE_H__

switch_status_t ibm_transcribe_init();
switch_status_t ibm_transcribe_cleanup();
switch_status_t ibm_transcribe_session_init(switch_core_session_t *session, 
		uint32_t samples_per_second, uint32_t channels, char* lang, int interim, char* bugname, void **ppUserData);
switch_status_t ibm_transcribe_session_stop(switch_core_session_t *session, int channelIsClosing, char* bugname);
switch_bool_t ibm_transcribe_frame(switch_core_session_t *session, switch_media_bug_t *bug);

#endif