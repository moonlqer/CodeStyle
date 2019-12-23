/*
 * Copyright 2019-present moonlqer
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this 
 * software and associated documentation files (the "Software"), to deal in the Software 
 * without restriction, including without limitation the rights to use, copy, modify, merge, 
 * publish, distribute, sublicense, and/or sell copies of the Software, and to permit 
 * persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
 * BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, 
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/*
 * @file   : main.h
 * @brief  : 主程序定义文件
 * @author : liqiang
 * @version: 1.0
 * @date   : 2019/12/21 10:38
 */

#ifndef MAIN_H  
#define MAIN_H


#ifdef __cplusplus
extern "C" {
#endif
	//定义枚举类型的示例
	typedef enum {
		TYPE_FUNC = 0,
		TYPE_INCLUDE = 1,
		TYPE_PARAMS = 2,
	}CodeDefType;

	//定义结构体数据的实例
	typedef struct {
		int data;
		char fileName[16];
		int dataLen;
	}MsgData;

#ifdef __cplusplus
}
#endif

#endif //MAIN_H

