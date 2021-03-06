#ifndef PREF_GLOBAL__H
#define PREF_GLOBAL__H

#include <stdbool.h>
#include "cal.h"
#include "pose.h"
#include "tracking.h"
#include "axis.h"

#ifdef __cplusplus
extern "C" {
#endif

char *ltr_int_get_device_section();
bool ltr_int_is_model_active();
float ltr_int_get_focal_length();
void ltr_int_set_focal_length(float fl);
bool ltr_int_use_alter();
void ltr_int_set_use_alter(bool state);
bool ltr_int_use_oldrot();
void ltr_int_set_use_oldrot(bool state);
bool ltr_int_do_tr_align();
void ltr_int_set_tr_align(bool state);
bool ltr_int_get_device(struct camera_control_block *ccb);
bool ltr_int_get_model_setup(reflector_model_type *rm);
void ltr_int_announce_model_change();
bool ltr_int_model_changed(bool reset_flag);
int ltr_int_get_orientation();

void ltr_int_close_prefs();

#ifdef __cplusplus
}
#endif

#endif
