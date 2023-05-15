extern int fswebcam_init();
extern int fswebcam_grab(int(*callback)(void*, unsigned long, void *), void * extra);
extern int fswebcam_uninit();
