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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEVULLISTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEVULLISTRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeImageVulListResult : public ServiceResult
			{
			public:
				struct VulRecord
				{
					struct ExtendContentJson
					{
						struct RpmEntity
						{
							std::string path;
							std::string updateCmd;
							std::vector<std::string> matchList;
							std::string version;
							std::string fullVersion;
							std::string layer;
							std::string matchDetail;
							std::string name;
						};
						std::string os;
						std::vector<RpmEntity> rpmEntityList;
						std::string osRelease;
					};
					int status;
					int progress;
					std::string repoNamespace;
					std::string imageDigest;
					std::string repoName;
					long lastTs;
					std::string necessity;
					std::string name;
					std::string type;
					long firstTs;
					long modifyTs;
					std::string related;
					std::string uuid;
					bool canUpdate;
					std::string aliasName;
					std::string level;
					std::string tag;
					ExtendContentJson extendContentJson;
					std::vector<std::string> layers;
					long primaryId;
				};


				DescribeImageVulListResult();
				explicit DescribeImageVulListResult(const std::string &payload);
				~DescribeImageVulListResult();
				int getTotalCount()const;
				std::vector<VulRecord> getVulRecords()const;
				int getPageSize()const;
				int getCurrentPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<VulRecord> vulRecords_;
				int pageSize_;
				int currentPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEVULLISTRESULT_H_