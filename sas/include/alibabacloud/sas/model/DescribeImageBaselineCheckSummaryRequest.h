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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEBASELINECHECKSUMMARYREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEBASELINECHECKSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeImageBaselineCheckSummaryRequest : public RpcServiceRequest
			{

			public:
				DescribeImageBaselineCheckSummaryRequest();
				~DescribeImageBaselineCheckSummaryRequest();

				std::string getCriteria()const;
				void setCriteria(const std::string& criteria);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCriteriaType()const;
				void setCriteriaType(const std::string& criteriaType);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getRiskLevel()const;
				void setRiskLevel(const std::string& riskLevel);

            private:
				std::string criteria_;
				std::string sourceIp_;
				int pageSize_;
				std::string criteriaType_;
				std::string lang_;
				int currentPage_;
				std::string clusterId_;
				std::string riskLevel_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEBASELINECHECKSUMMARYREQUEST_H_