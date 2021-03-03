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

#ifndef ALIBABACLOUD_FACEBODY_MODEL_COMPAREFACEREQUEST_H_
#define ALIBABACLOUD_FACEBODY_MODEL_COMPAREFACEREQUEST_H_

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
			class ALIBABACLOUD_FACEBODY_EXPORT CompareFaceRequest : public RpcServiceRequest
			{

			public:
				CompareFaceRequest();
				~CompareFaceRequest();

				float getQualityScoreThreshold()const;
				void setQualityScoreThreshold(float qualityScoreThreshold);
				std::string getImageURLB()const;
				void setImageURLB(const std::string& imageURLB);
				std::string getImageURLA()const;
				void setImageURLA(const std::string& imageURLA);
				int getImageType()const;
				void setImageType(int imageType);

            private:
				float qualityScoreThreshold_;
				std::string imageURLB_;
				std::string imageURLA_;
				int imageType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FACEBODY_MODEL_COMPAREFACEREQUEST_H_