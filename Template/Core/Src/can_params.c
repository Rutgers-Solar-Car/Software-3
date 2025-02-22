#include "can_params.h"

// Init CAN params
// TODO: should throw these configs into a env file or makefile?
void sw3_gv_params_init(can_params_t *gv_params)
{
	*gv_params = {
		.speed = {
			.PARAM_ID = 1025,
			.value = 0,
			.last_value = 0,
			.SAFE_VALUE = 0,
			.timestamp = 0,
			.TTL = 10,
			.flags = {.message_mode = PASSIVE, .marked_for_send = 0, .reserved = 0}}};
}
