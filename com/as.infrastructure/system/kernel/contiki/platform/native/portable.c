/**
 * AS - the open source Automotive Software on https://github.com/parai
 *
 * Copyright (C) 2016  AS <parai@foxmail.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */
/* ============================ [ INCLUDES  ] ====================================================== */
#include "Std_Types.h"
#include "contiki.h"
#include "Os.h"
/* ============================ [ MACROS    ] ====================================================== */

/* ============================ [ TYPES     ] ====================================================== */
/* ============================ [ DECLARES  ] ====================================================== */
/* ============================ [ DATAS     ] ====================================================== */
TickType OsTickCounter = 0;
const struct process *procinit[1] = {0,};

PROCESS(hello_world_process, "Hello world process");
AUTOSTART_PROCESSES(&hello_world_process);
/* ============================ [ LOCALS    ] ====================================================== */

/* ============================ [ FUNCTIONS ] ====================================================== */

imask_t __Irq_Save(void)
{
	return 0;
}

void Irq_Restore(imask_t irq_state)
{

}

void rtimer_arch_init(void)
{

}

void rtimer_arch_schedule(rtimer_clock_t t)
{

}

void mtarch_init(void)
{

}

void mtarch_remove(void)
{

}

void mtarch_start(struct mtarch_thread *thread,
		  void (* function)(void *data),
		  void *data)
{

}

void mtarch_exec(struct mtarch_thread *thread)
{

}

void mtarch_yield(void)
{

}

void mtarch_stop(struct mtarch_thread *thread)
{

}

void mtarch_pstart(void)
{

}

void mtarch_pstop(void)
{

}

TickType GetOsTick(void)
{
	return 0;
}

void ShutdownOS(StatusType ercd)
{

}

PROCESS_THREAD(hello_world_process, ev, data)
{
  PROCESS_BEGIN();

  printf("Hello, world, begin\n");
  for(;;)
  {
	  PROCESS_PAUSE();
	  printf("Hello, world\n");
  }
  printf("Hello, world, end\n");

  PROCESS_END();
}