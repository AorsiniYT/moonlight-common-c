
// Limelight.c (stub)
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "Limelight.h"

#ifndef true
#define true 1
#define false 0
#endif
// Implementación mínima para exponer símbolos
const char* LiGetLaunchUrlQueryParameters(void) { return ""; }
void LiInitializeStreamConfiguration(PSTREAM_CONFIGURATION streamConfig) { if (streamConfig) memset(streamConfig, 0, sizeof(*streamConfig)); }
void LiInitializeVideoCallbacks(PDECODER_RENDERER_CALLBACKS drCallbacks) { if (drCallbacks) memset(drCallbacks, 0, sizeof(*drCallbacks)); }
void LiInitializeAudioCallbacks(PAUDIO_RENDERER_CALLBACKS arCallbacks) { if (arCallbacks) memset(arCallbacks, 0, sizeof(*arCallbacks)); }
void LiInitializeConnectionCallbacks(PCONNECTION_LISTENER_CALLBACKS clCallbacks) { if (clCallbacks) memset(clCallbacks, 0, sizeof(*clCallbacks)); }
void LiInitializeServerInformation(PSERVER_INFORMATION serverInfo) { if (serverInfo) memset(serverInfo, 0, sizeof(*serverInfo)); }
int LiStartConnection(PSERVER_INFORMATION a, PSTREAM_CONFIGURATION b, PCONNECTION_LISTENER_CALLBACKS c, PDECODER_RENDERER_CALLBACKS d, PAUDIO_RENDERER_CALLBACKS e, void* f, int g, void* h, int i) { return 0; }
void LiStopConnection(void) {}
void LiInterruptConnection(void) {}
const char* LiGetStageName(int stage) { return ""; }
bool LiGetEstimatedRttInfo(uint32_t* a, uint32_t* b) { return false; }
int LiSendMouseMoveEvent(short a, short b) { return 0; }
int LiSendMousePositionEvent(short a, short b, short c, short d) { return 0; }
int LiSendMouseMoveAsMousePositionEvent(short a, short b, short c, short d) { return 0; }
int LiSendTouchEvent(uint8_t a, uint32_t b, float c, float d, float e, float f, float g, uint16_t h) { return 0; }
int LiSendPenEvent(uint8_t a, uint8_t b, uint8_t c, float d, float e, float f, float g, float h, uint16_t i, uint8_t j) { return 0; }
int LiSendMouseButtonEvent(char a, int b) { return 0; }
int LiSendKeyboardEvent(short a, char b, char c) { return 0; }
int LiSendKeyboardEvent2(short a, char b, char c, char d) { return 0; }
int LiSendUtf8TextEvent(const char *a, unsigned int b) { return 0; }
int LiSendControllerEvent(int a, unsigned char b, unsigned char c, short d, short e, short f, short g) { return 0; }
int LiSendMultiControllerEvent(short a, short b, int c, unsigned char d, unsigned char e, short f, short g, short h, short i) { return 0; }
int LiSendControllerArrivalEvent(uint8_t a, uint16_t b, uint8_t c, uint32_t d, uint16_t e) { return 0; }
int LiSendControllerTouchEvent(uint8_t a, uint8_t b, uint32_t c, float d, float e, float f) { return 0; }
int LiSendControllerMotionEvent(uint8_t a, uint8_t b, float c, float d, float e) { return 0; }
int LiSendControllerBatteryEvent(uint8_t a, uint8_t b, uint8_t c) { return 0; }
int LiSendScrollEvent(signed char a) { return 0; }
int LiSendHighResScrollEvent(short a) { return 0; }
int LiSendHScrollEvent(signed char a) { return 0; }
int LiSendHighResHScrollEvent(short a) { return 0; }
uint64_t LiGetMillis(void) { return 0; }
int LiFindExternalAddressIP4(const char* a, unsigned short b, unsigned int* c) { return 0; }
int LiGetPendingVideoFrames(void) { return 0; }
int LiGetPendingAudioFrames(void) { return 0; }
int LiGetPendingAudioDuration(void) { return 0; }
unsigned int LiGetPortFlagsFromStage(int a) { return 0; }
unsigned int LiGetPortFlagsFromTerminationErrorCode(int a) { return 0; }
int LiGetProtocolFromPortFlagIndex(int a) { return 0; }
unsigned short LiGetPortFromPortFlagIndex(int a) { return 0; }
void LiStringifyPortFlags(unsigned int a, const char* b, char* c, int d) { if (c && d > 0) c[0] = '\0'; }
unsigned int LiTestClientConnectivity(const char* a, unsigned short b, unsigned int c) { return 0; }
bool LiWaitForNextVideoFrame(void* *a, PDECODE_UNIT* b) { return false; }
bool LiPollNextVideoFrame(void* *a, PDECODE_UNIT* b) { return false; }
bool LiPeekNextVideoFrame(PDECODE_UNIT* a) { return false; }
void LiWakeWaitForVideoFrame(void) {}
void LiCompleteVideoFrame(void* a, int b) {}
bool LiGetCurrentHostDisplayHdrMode(void) { return false; }
bool LiGetHdrMetadata(PSS_HDR_METADATA a) { return false; }
void LiRequestIdrFrame(void) {}
uint32_t LiGetHostFeatureFlags(void) { return 0; }
