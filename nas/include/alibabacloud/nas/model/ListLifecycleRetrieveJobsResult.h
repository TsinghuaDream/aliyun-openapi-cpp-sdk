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

#ifndef ALIBABACLOUD_NAS_MODEL_LISTLIFECYCLERETRIEVEJOBSRESULT_H_
#define ALIBABACLOUD_NAS_MODEL_LISTLIFECYCLERETRIEVEJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nas/NASExport.h>

namespace AlibabaCloud
{
	namespace NAS
	{
		namespace Model
		{
			class ALIBABACLOUD_NAS_EXPORT ListLifecycleRetrieveJobsResult : public ServiceResult
			{
			public:
				struct LifecycleRetrieveJob
				{
					std::string status;
					std::string storageType;
					std::string createTime;
					std::string updateTime;
					long retrievedFileCount;
					std::string fileSystemId;
					std::vector<std::string> paths;
					long discoveredFileCount;
					std::string jobId;
				};


				ListLifecycleRetrieveJobsResult();
				explicit ListLifecycleRetrieveJobsResult(const std::string &payload);
				~ListLifecycleRetrieveJobsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<LifecycleRetrieveJob> getLifecycleRetrieveJobs()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<LifecycleRetrieveJob> lifecycleRetrieveJobs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NAS_MODEL_LISTLIFECYCLERETRIEVEJOBSRESULT_H_