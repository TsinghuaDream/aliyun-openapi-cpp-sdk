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

#ifndef ALIBABACLOUD_IMS_MODEL_GETUSERMFAINFORESULT_H_
#define ALIBABACLOUD_IMS_MODEL_GETUSERMFAINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ims/ImsExport.h>

namespace AlibabaCloud
{
	namespace Ims
	{
		namespace Model
		{
			class ALIBABACLOUD_IMS_EXPORT GetUserMFAInfoResult : public ServiceResult
			{
			public:
				struct MFADevice
				{
					std::string type;
					std::string serialNumber;
				};


				GetUserMFAInfoResult();
				explicit GetUserMFAInfoResult(const std::string &payload);
				~GetUserMFAInfoResult();
				MFADevice getMFADevice()const;
				bool getIsMFAEnable()const;

			protected:
				void parse(const std::string &payload);
			private:
				MFADevice mFADevice_;
				bool isMFAEnable_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMS_MODEL_GETUSERMFAINFORESULT_H_