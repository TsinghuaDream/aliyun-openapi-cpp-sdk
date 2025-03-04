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

#ifndef ALIBABACLOUD_OBJECTDET_MODEL_DETECTIPCOBJECTREQUEST_H_
#define ALIBABACLOUD_OBJECTDET_MODEL_DETECTIPCOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/objectdet/ObjectdetExport.h>

namespace AlibabaCloud
{
	namespace Objectdet
	{
		namespace Model
		{
			class ALIBABACLOUD_OBJECTDET_EXPORT DetectIPCObjectRequest : public RpcServiceRequest
			{

			public:
				DetectIPCObjectRequest();
				~DetectIPCObjectRequest();

				std::string getOssFile()const;
				void setOssFile(const std::string& ossFile);
				std::string getRequestProxyBy()const;
				void setRequestProxyBy(const std::string& requestProxyBy);
				std::string getImageURL()const;
				void setImageURL(const std::string& imageURL);

            private:
				std::string ossFile_;
				std::string requestProxyBy_;
				std::string imageURL_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OBJECTDET_MODEL_DETECTIPCOBJECTREQUEST_H_