#include <rtthread.h>
#include "hal_data.h"

#ifdef BSP_USING_SCI_SPI
rt_weak void sci_spi3_callback(spi_callback_args_t *p_args)
{
}

rt_weak void sci_spi4_callback(spi_callback_args_t *p_args)
{
}

rt_weak void sci_spi6_callback(spi_callback_args_t *p_args)
{
}

rt_weak void sci_spi7_callback(spi_callback_args_t *p_args)
{
}
#endif

rt_weak void g_ceu_callback(capture_callback_args_t *p_args)
{
}

#ifdef BSP_USING_MIPI_LCD
rt_weak void mipi_dsi0_callback(mipi_dsi_callback_args_t * p_args)
{
}
#endif