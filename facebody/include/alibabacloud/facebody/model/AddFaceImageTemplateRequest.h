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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_ADDFACEIMAGETEMPLATEREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_ADDFACEIMAGETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/facebody/FacebodyExport.h>

namespace AlibabaCloud
{
	namespace Facebody
	{
		namespace Model
		{
			class ALIBABACLOUD_FACEBODY_EXPORT AddFaceImageTemplateRequest : public RpcServiceRequest
			{

			public:
				AddFaceImageTemplateRequest();
				~AddFaceImageTemplateRequest();

				bool getFormatResultToJson()const;
				void setFormatResultToJson(bool formatResultToJson);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getOssFile()const;
				void setOssFile(const std::string& ossFile);
				std::string getRequestProxyBy()const;
				void setRequestProxyBy(const std::string& requestProxyBy);
				std::string getImageURL()const;
				void setImageURL(const std::string& imageURL);

            private:
				bool formatResultToJson_;
				std::string userId_;
				std::string ossFile_;
				std::string requestProxyBy_;
				std::string imageURL_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FACEBODY_MODEL_ADDFACEIMAGETEMPLATEREQUEST_H_