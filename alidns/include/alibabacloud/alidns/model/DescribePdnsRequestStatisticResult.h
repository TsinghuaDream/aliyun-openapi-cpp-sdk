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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSREQUESTSTATISTICRESULT_H_
#define ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSREQUESTSTATISTICRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT DescribePdnsRequestStatisticResult : public ServiceResult
			{
			public:
				struct StatisticItem
				{
					long udpTotalCount;
					long ipCount;
					long v6HttpCount;
					long v4Count;
					long httpsCount;
					long v4HttpsCount;
					long timestamp;
					long v6Count;
					long totalCount;
					long v4HttpCount;
					long httpCount;
					long v6HttpsCount;
					long dohTotalCount;
				};


				DescribePdnsRequestStatisticResult();
				explicit DescribePdnsRequestStatisticResult(const std::string &payload);
				~DescribePdnsRequestStatisticResult();
				std::vector<StatisticItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<StatisticItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_DESCRIBEPDNSREQUESTSTATISTICRESULT_H_