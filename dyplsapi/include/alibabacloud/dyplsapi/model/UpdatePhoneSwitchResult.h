/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
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

#ifndef ALIBABACLOUD_DYPLSAPI_MODEL_UPDATEPHONESWITCHRESULT_H_
#define ALIBABACLOUD_DYPLSAPI_MODEL_UPDATEPHONESWITCHRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dyplsapi/DyplsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyplsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPLSAPI_EXPORT UpdatePhoneSwitchResult : public ServiceResult
			{
			public:


				UpdatePhoneSwitchResult();
				explicit UpdatePhoneSwitchResult(const std::string &payload);
				~UpdatePhoneSwitchResult();
				std::string getMessage()const;
				std::string getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPLSAPI_MODEL_UPDATEPHONESWITCHRESULT_H_