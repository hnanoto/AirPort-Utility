//
//  AirPort_Utility.c
//  AirPort Utility
//
//  Created by Henrique on 15/10/23.
//

#include <mach/mach_types.h>

kern_return_t AirPort_Utility_start(kmod_info_t * ki, void *d);
kern_return_t AirPort_Utility_stop(kmod_info_t *ki, void *d);

kern_return_t AirPort_Utility_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t AirPort_Utility_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
