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

#ifndef ALIBABACLOUD_QUOTAS_MODEL_GETQUOTAAPPLICATIONAPPROVALRESULT_H_
#define ALIBABACLOUD_QUOTAS_MODEL_GETQUOTAAPPLICATIONAPPROVALRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/quotas/QuotasExport.h>

namespace AlibabaCloud
{
	namespace Quotas
	{
		namespace Model
		{
			class ALIBABACLOUD_QUOTAS_EXPORT GetQuotaApplicationApprovalResult : public ServiceResult
			{
			public:
				struct Module
				{
					int reminderIntervalHours;
					std::string unsupportReminderReason;
					int approvalHours;
					bool supportReminder;
				};


				GetQuotaApplicationApprovalResult();
				explicit GetQuotaApplicationApprovalResult(const std::string &payload);
				~GetQuotaApplicationApprovalResult();
				bool getAllowRetry()const;
				std::vector<std::string> getErrorArgs()const;
				int getHttpStatusCode()const;
				std::string getErrorMsg()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorCode()const;
				Module getModule()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool allowRetry_;
				std::vector<std::string> errorArgs_;
				int httpStatusCode_;
				std::string errorMsg_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				std::string errorCode_;
				Module module_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUOTAS_MODEL_GETQUOTAAPPLICATIONAPPROVALRESULT_H_