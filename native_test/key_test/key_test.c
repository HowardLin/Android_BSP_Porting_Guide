/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * CYESS Co.,Ltd howard.lin@cyess.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <linux/input.h>
#define NOKEY 0

int main()
{
	int keys_fd;	
        char ret[2]; 
	struct input_event t;
      
        keys_fd = open("/dev/input/event0", O_RDONLY);
	if(keys_fd<=0)
	{
                printf("open /dev/input/event0 device error!\n");
		return 0;
	}

	while(1)
	{	
                if(read(keys_fd,&t,sizeof(t))==sizeof(t)) {
		    if(t.type==EV_KEY)
			if(t.value==0 || t.value==1)
			    printf("key %d %s\n",t.code,(t.value)?"Pressed":"Released");
		}
	}	
	close(keys_fd);
	
        return 0;
}

