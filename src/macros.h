/*
 * common.h
 *
 *  Created on: Dec 13, 2011
 *      Author: ngk437
 */

#ifndef COMMON_H_
#define COMMON_H_

#define JS_STR(...) v8::String::New(__VA_ARGS__)
#define JS_INT(val) v8::Integer::New(val)
#define JS_FLOAT(val) v8::Number::New(val)
#define JS_BOOL(val) v8::Boolean::New(val)

#endif /* COMMON_H_ */
