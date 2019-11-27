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

#ifndef ALIBABACLOUD_SMC_MODEL_CREATEREPLICATIONJOBRESULT_H_
#define ALIBABACLOUD_SMC_MODEL_CREATEREPLICATIONJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smc/SmcExport.h>

namespace AlibabaCloud
{
	namespace Smc
	{
		namespace Model
		{
			class ALIBABACLOUD_SMC_EXPORT CreateReplicationJobResult : public ServiceResult
			{
			public:


				CreateReplicationJobResult();
				explicit CreateReplicationJobResult(const std::string &payload);
				~CreateReplicationJobResult();
				std::string getJobId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string jobId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMC_MODEL_CREATEREPLICATIONJOBRESULT_H_