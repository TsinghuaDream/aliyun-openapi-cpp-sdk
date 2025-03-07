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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_DETECTFACEREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_DETECTFACEREQUEST_H_

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
			class ALIBABACLOUD_FACEBODY_EXPORT DetectFaceRequest : public RpcServiceRequest
			{

			public:
				DetectFaceRequest();
				~DetectFaceRequest();

				long getMaxFaceNumber()const;
				void setMaxFaceNumber(long maxFaceNumber);
				bool getFormatResultToJson()const;
				void setFormatResultToJson(bool formatResultToJson);
				bool getLandmark()const;
				void setLandmark(bool landmark);
				std::string getOssFile()const;
				void setOssFile(const std::string& ossFile);
				int getImageType()const;
				void setImageType(int imageType);
				bool getPose()const;
				void setPose(bool pose);
				std::string getRequestProxyBy()const;
				void setRequestProxyBy(const std::string& requestProxyBy);
				bool getQuality()const;
				void setQuality(bool quality);
				std::string getImageURL()const;
				void setImageURL(const std::string& imageURL);

            private:
				long maxFaceNumber_;
				bool formatResultToJson_;
				bool landmark_;
				std::string ossFile_;
				int imageType_;
				bool pose_;
				std::string requestProxyBy_;
				bool quality_;
				std::string imageURL_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FACEBODY_MODEL_DETECTFACEREQUEST_H_