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

#ifndef ALIBABACLOUD_SAS_MODEL_QUERYGROUPEDSECURITYEVENTMARKMISSLISTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_QUERYGROUPEDSECURITYEVENTMARKMISSLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT QueryGroupedSecurityEventMarkMissListResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct ListItem
				{
					std::string field;
					long gmtCreate;
					std::string eventType;
					std::string eventTypeOriginal;
					long gmtModified;
					std::string eventName;
					std::string fieldValue;
					std::string operate;
					std::string uuids;
					std::string eventNameOriginal;
					long aliUid;
					std::string filedAliasName;
				};


				QueryGroupedSecurityEventMarkMissListResult();
				explicit QueryGroupedSecurityEventMarkMissListResult(const std::string &payload);
				~QueryGroupedSecurityEventMarkMissListResult();
				PageInfo getPageInfo()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<ListItem> getList()const;
				long getTimeCost()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::string message_;
				int httpStatusCode_;
				std::vector<ListItem> list_;
				long timeCost_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_QUERYGROUPEDSECURITYEVENTMARKMISSLISTRESULT_H_