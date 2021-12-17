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

#include <alibabacloud/nas/model/DescribeFileSystemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeFileSystemsResult::DescribeFileSystemsResult() :
	ServiceResult()
{}

DescribeFileSystemsResult::DescribeFileSystemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFileSystemsResult::~DescribeFileSystemsResult()
{}

void DescribeFileSystemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFileSystemsNode = value["FileSystems"]["FileSystem"];
	for (auto valueFileSystemsFileSystem : allFileSystemsNode)
	{
		FileSystem fileSystemsObject;
		if(!valueFileSystemsFileSystem["FileSystemId"].isNull())
			fileSystemsObject.fileSystemId = valueFileSystemsFileSystem["FileSystemId"].asString();
		if(!valueFileSystemsFileSystem["Description"].isNull())
			fileSystemsObject.description = valueFileSystemsFileSystem["Description"].asString();
		if(!valueFileSystemsFileSystem["CreateTime"].isNull())
			fileSystemsObject.createTime = valueFileSystemsFileSystem["CreateTime"].asString();
		if(!valueFileSystemsFileSystem["ExpiredTime"].isNull())
			fileSystemsObject.expiredTime = valueFileSystemsFileSystem["ExpiredTime"].asString();
		if(!valueFileSystemsFileSystem["RegionId"].isNull())
			fileSystemsObject.regionId = valueFileSystemsFileSystem["RegionId"].asString();
		if(!valueFileSystemsFileSystem["ZoneId"].isNull())
			fileSystemsObject.zoneId = valueFileSystemsFileSystem["ZoneId"].asString();
		if(!valueFileSystemsFileSystem["ProtocolType"].isNull())
			fileSystemsObject.protocolType = valueFileSystemsFileSystem["ProtocolType"].asString();
		if(!valueFileSystemsFileSystem["StorageType"].isNull())
			fileSystemsObject.storageType = valueFileSystemsFileSystem["StorageType"].asString();
		if(!valueFileSystemsFileSystem["FileSystemType"].isNull())
			fileSystemsObject.fileSystemType = valueFileSystemsFileSystem["FileSystemType"].asString();
		if(!valueFileSystemsFileSystem["EncryptType"].isNull())
			fileSystemsObject.encryptType = std::stoi(valueFileSystemsFileSystem["EncryptType"].asString());
		if(!valueFileSystemsFileSystem["MeteredSize"].isNull())
			fileSystemsObject.meteredSize = std::stol(valueFileSystemsFileSystem["MeteredSize"].asString());
		if(!valueFileSystemsFileSystem["MeteredIASize"].isNull())
			fileSystemsObject.meteredIASize = std::stol(valueFileSystemsFileSystem["MeteredIASize"].asString());
		if(!valueFileSystemsFileSystem["Bandwidth"].isNull())
			fileSystemsObject.bandwidth = std::stol(valueFileSystemsFileSystem["Bandwidth"].asString());
		if(!valueFileSystemsFileSystem["Capacity"].isNull())
			fileSystemsObject.capacity = std::stol(valueFileSystemsFileSystem["Capacity"].asString());
		if(!valueFileSystemsFileSystem["AutoSnapshotPolicyId"].isNull())
			fileSystemsObject.autoSnapshotPolicyId = valueFileSystemsFileSystem["AutoSnapshotPolicyId"].asString();
		if(!valueFileSystemsFileSystem["Status"].isNull())
			fileSystemsObject.status = valueFileSystemsFileSystem["Status"].asString();
		if(!valueFileSystemsFileSystem["ChargeType"].isNull())
			fileSystemsObject.chargeType = valueFileSystemsFileSystem["ChargeType"].asString();
		if(!valueFileSystemsFileSystem["MountTargetCountLimit"].isNull())
			fileSystemsObject.mountTargetCountLimit = std::stol(valueFileSystemsFileSystem["MountTargetCountLimit"].asString());
		if(!valueFileSystemsFileSystem["NasNamespaceId"].isNull())
			fileSystemsObject.nasNamespaceId = valueFileSystemsFileSystem["NasNamespaceId"].asString();
		if(!valueFileSystemsFileSystem["KMSKeyId"].isNull())
			fileSystemsObject.kMSKeyId = valueFileSystemsFileSystem["KMSKeyId"].asString();
		if(!valueFileSystemsFileSystem["Version"].isNull())
			fileSystemsObject.version = valueFileSystemsFileSystem["Version"].asString();
		auto allMountTargetsNode = valueFileSystemsFileSystem["MountTargets"]["MountTarget"];
		for (auto valueFileSystemsFileSystemMountTargetsMountTarget : allMountTargetsNode)
		{
			FileSystem::MountTarget mountTargetsObject;
			if(!valueFileSystemsFileSystemMountTargetsMountTarget["MountTargetDomain"].isNull())
				mountTargetsObject.mountTargetDomain = valueFileSystemsFileSystemMountTargetsMountTarget["MountTargetDomain"].asString();
			if(!valueFileSystemsFileSystemMountTargetsMountTarget["NetworkType"].isNull())
				mountTargetsObject.networkType = valueFileSystemsFileSystemMountTargetsMountTarget["NetworkType"].asString();
			if(!valueFileSystemsFileSystemMountTargetsMountTarget["VpcId"].isNull())
				mountTargetsObject.vpcId = valueFileSystemsFileSystemMountTargetsMountTarget["VpcId"].asString();
			if(!valueFileSystemsFileSystemMountTargetsMountTarget["VswId"].isNull())
				mountTargetsObject.vswId = valueFileSystemsFileSystemMountTargetsMountTarget["VswId"].asString();
			if(!valueFileSystemsFileSystemMountTargetsMountTarget["AccessGroupName"].isNull())
				mountTargetsObject.accessGroupName = valueFileSystemsFileSystemMountTargetsMountTarget["AccessGroupName"].asString();
			if(!valueFileSystemsFileSystemMountTargetsMountTarget["Status"].isNull())
				mountTargetsObject.status = valueFileSystemsFileSystemMountTargetsMountTarget["Status"].asString();
			if(!valueFileSystemsFileSystemMountTargetsMountTarget["DualStackMountTargetDomain"].isNull())
				mountTargetsObject.dualStackMountTargetDomain = valueFileSystemsFileSystemMountTargetsMountTarget["DualStackMountTargetDomain"].asString();
			auto allClientMasterNodesNode = valueFileSystemsFileSystemMountTargetsMountTarget["ClientMasterNodes"]["ClientMasterNode"];
			for (auto valueFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode : allClientMasterNodesNode)
			{
				FileSystem::MountTarget::ClientMasterNode clientMasterNodesObject;
				if(!valueFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode["EcsId"].isNull())
					clientMasterNodesObject.ecsId = valueFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode["EcsId"].asString();
				if(!valueFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode["EcsIp"].isNull())
					clientMasterNodesObject.ecsIp = valueFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode["EcsIp"].asString();
				if(!valueFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode["DefaultPasswd"].isNull())
					clientMasterNodesObject.defaultPasswd = valueFileSystemsFileSystemMountTargetsMountTargetClientMasterNodesClientMasterNode["DefaultPasswd"].asString();
				mountTargetsObject.clientMasterNodes.push_back(clientMasterNodesObject);
			}
			auto allTags1Node = valueFileSystemsFileSystemMountTargetsMountTarget["Tags"]["Tag"];
			for (auto valueFileSystemsFileSystemMountTargetsMountTargetTagsTag : allTags1Node)
			{
				FileSystem::MountTarget::Tag tags1Object;
				if(!valueFileSystemsFileSystemMountTargetsMountTargetTagsTag["Key"].isNull())
					tags1Object.key = valueFileSystemsFileSystemMountTargetsMountTargetTagsTag["Key"].asString();
				if(!valueFileSystemsFileSystemMountTargetsMountTargetTagsTag["Value"].isNull())
					tags1Object.value = valueFileSystemsFileSystemMountTargetsMountTargetTagsTag["Value"].asString();
				mountTargetsObject.tags1.push_back(tags1Object);
			}
			fileSystemsObject.mountTargets.push_back(mountTargetsObject);
		}
		auto allPackagesNode = valueFileSystemsFileSystem["Packages"]["Package"];
		for (auto valueFileSystemsFileSystemPackagesPackage : allPackagesNode)
		{
			FileSystem::Package packagesObject;
			if(!valueFileSystemsFileSystemPackagesPackage["PackageId"].isNull())
				packagesObject.packageId = valueFileSystemsFileSystemPackagesPackage["PackageId"].asString();
			if(!valueFileSystemsFileSystemPackagesPackage["PackageType"].isNull())
				packagesObject.packageType = valueFileSystemsFileSystemPackagesPackage["PackageType"].asString();
			if(!valueFileSystemsFileSystemPackagesPackage["Size"].isNull())
				packagesObject.size = std::stol(valueFileSystemsFileSystemPackagesPackage["Size"].asString());
			if(!valueFileSystemsFileSystemPackagesPackage["StartTime"].isNull())
				packagesObject.startTime = valueFileSystemsFileSystemPackagesPackage["StartTime"].asString();
			if(!valueFileSystemsFileSystemPackagesPackage["ExpiredTime"].isNull())
				packagesObject.expiredTime = valueFileSystemsFileSystemPackagesPackage["ExpiredTime"].asString();
			fileSystemsObject.packages.push_back(packagesObject);
		}
		auto allTagsNode = valueFileSystemsFileSystem["Tags"]["Tag"];
		for (auto valueFileSystemsFileSystemTagsTag : allTagsNode)
		{
			FileSystem::Tag2 tagsObject;
			if(!valueFileSystemsFileSystemTagsTag["Key"].isNull())
				tagsObject.key = valueFileSystemsFileSystemTagsTag["Key"].asString();
			if(!valueFileSystemsFileSystemTagsTag["Value"].isNull())
				tagsObject.value = valueFileSystemsFileSystemTagsTag["Value"].asString();
			fileSystemsObject.tags.push_back(tagsObject);
		}
		auto ldapNode = value["Ldap"];
		if(!ldapNode["BindDN"].isNull())
			fileSystemsObject.ldap.bindDN = ldapNode["BindDN"].asString();
		if(!ldapNode["URI"].isNull())
			fileSystemsObject.ldap.uRI = ldapNode["URI"].asString();
		if(!ldapNode["SearchBase"].isNull())
			fileSystemsObject.ldap.searchBase = ldapNode["SearchBase"].asString();
		auto allSupportedFeatures = value["SupportedFeatures"]["SupportedFeature"];
		for (auto value : allSupportedFeatures)
			fileSystemsObject.supportedFeatures.push_back(value.asString());
		fileSystems_.push_back(fileSystemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<DescribeFileSystemsResult::FileSystem> DescribeFileSystemsResult::getFileSystems()const
{
	return fileSystems_;
}

int DescribeFileSystemsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeFileSystemsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeFileSystemsResult::getPageNumber()const
{
	return pageNumber_;
}

