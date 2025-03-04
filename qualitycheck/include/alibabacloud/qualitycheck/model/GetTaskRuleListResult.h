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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_GETTASKRULELISTRESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_GETTASKRULELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qualitycheck/QualitycheckExport.h>

namespace AlibabaCloud
{
	namespace Qualitycheck
	{
		namespace Model
		{
			class ALIBABACLOUD_QUALITYCHECK_EXPORT GetTaskRuleListResult : public ServiceResult
			{
			public:
				struct RuleCountInfo
				{
					int status;
					float hitRealViolationRate;
					std::string typeName;
					float hitRate;
					int reviewNumber;
					long createTime;
					int preReviewNumber;
					std::string createEmpid;
					std::string rid;
					int checkNumber;
					std::string name;
					int type;
					int realViolationNumber;
					std::string lastUpdateEmpid;
					long lastUpdateTime;
					int hitNumber;
					bool select;
					int isDelete;
				};


				GetTaskRuleListResult();
				explicit GetTaskRuleListResult(const std::string &payload);
				~GetTaskRuleListResult();
				int getCompSubTaskCount()const;
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getCurrentPage()const;
				int getReviewStatus()const;
				int getDataSize()const;
				std::vector<RuleCountInfo> getData()const;
				std::string getCode()const;
				bool getSuccess()const;
				int getTotalSubTaskCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				int compSubTaskCount_;
				int totalCount_;
				std::string message_;
				int pageSize_;
				int currentPage_;
				int reviewStatus_;
				int dataSize_;
				std::vector<RuleCountInfo> data_;
				std::string code_;
				bool success_;
				int totalSubTaskCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_GETTASKRULELISTRESULT_H_