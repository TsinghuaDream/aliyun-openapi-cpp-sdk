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

#ifndef ALIBABACLOUD_CAMS_MODEL_GETWHATSAPPHEALTHSTATUSRESULT_H_
#define ALIBABACLOUD_CAMS_MODEL_GETWHATSAPPHEALTHSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cams/CamsExport.h>

namespace AlibabaCloud
{
	namespace Cams
	{
		namespace Model
		{
			class ALIBABACLOUD_CAMS_EXPORT GetWhatsappHealthStatusResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct EntitiesItem
					{
						struct ErrorsItem
						{
							std::string errorDescription;
							std::string possibleSolution;
							std::string errorCode;
						};
						std::string entityType;
						std::string templateCode;
						std::vector<EntitiesItem::ErrorsItem> errors;
						std::string language;
						std::string canSendMessage;
						std::string phoneNumber;
						std::string wabaId;
						std::string businessId;
					};
					std::string canSendMessage;
					std::vector<EntitiesItem> entities;
				};


				GetWhatsappHealthStatusResult();
				explicit GetWhatsappHealthStatusResult(const std::string &payload);
				~GetWhatsappHealthStatusResult();
				std::string getAccessDeniedDetail()const;
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string accessDeniedDetail_;
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAMS_MODEL_GETWHATSAPPHEALTHSTATUSRESULT_H_