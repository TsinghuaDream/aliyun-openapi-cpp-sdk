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

#ifndef ALIBABACLOUD_ECS_MODEL_RUNINSTANCESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_RUNINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT RunInstancesRequest : public RpcServiceRequest
			{
			public:
				struct Arn
				{
					long assumeRoleFor;
					std::string rolearn;
					std::string roleType;
				};
				struct Tag
				{
					std::string key;
					std::string value;
				};
				struct NetworkInterface
				{
					std::string primaryIpAddress;
					std::string vSwitchId;
					std::string securityGroupId;
					std::vector<std::string> securityGroupIds;
					std::string networkInterfaceName;
					std::string description;
					int queueNumber;
				};
				struct DataDisk
				{
					int size;
					std::string snapshotId;
					std::string category;
					std::string encrypted;
					std::string kMSKeyId;
					std::string diskName;
					std::string description;
					std::string device;
					bool deleteWithInstance;
					std::string performanceLevel;
					std::string autoSnapshotPolicyId;
					std::string encryptAlgorithm;
				};

			public:
				RunInstancesRequest();
				~RunInstancesRequest();

				bool getUniqueSuffix()const;
				void setUniqueSuffix(bool uniqueSuffix);
				std::string getSecurityEnhancementStrategy()const;
				void setSecurityEnhancementStrategy(const std::string& securityEnhancementStrategy);
				int getMinAmount()const;
				void setMinAmount(int minAmount);
				bool getDeletionProtection()const;
				void setDeletionProtection(bool deletionProtection);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getPrivatePoolOptionsMatchCriteria()const;
				void setPrivatePoolOptionsMatchCriteria(const std::string& privatePoolOptionsMatchCriteria);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				int getDeploymentSetGroupNo()const;
				void setDeploymentSetGroupNo(int deploymentSetGroupNo);
				std::string getSystemDiskAutoSnapshotPolicyId()const;
				void setSystemDiskAutoSnapshotPolicyId(const std::string& systemDiskAutoSnapshotPolicyId);
				int getCpuOptionsCore()const;
				void setCpuOptionsCore(int cpuOptionsCore);
				int getPeriod()const;
				void setPeriod(int period);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getCpuOptionsNuma()const;
				void setCpuOptionsNuma(const std::string& cpuOptionsNuma);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSpotStrategy()const;
				void setSpotStrategy(const std::string& spotStrategy);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				int getInternetMaxBandwidthIn()const;
				void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);
				std::string getAffinity()const;
				void setAffinity(const std::string& affinity);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getSpotInterruptionBehavior()const;
				void setSpotInterruptionBehavior(const std::string& spotInterruptionBehavior);
				int getNetworkInterfaceQueueNumber()const;
				void setNetworkInterfaceQueueNumber(int networkInterfaceQueueNumber);
				std::string getIoOptimized()const;
				void setIoOptimized(const std::string& ioOptimized);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				bool getHibernationOptionsConfigured()const;
				void setHibernationOptionsConfigured(bool hibernationOptionsConfigured);
				std::string getSystemDiskPerformanceLevel()const;
				void setSystemDiskPerformanceLevel(const std::string& systemDiskPerformanceLevel);
				bool getPasswordInherit()const;
				void setPasswordInherit(bool passwordInherit);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::vector<Arn> getArn()const;
				void setArn(const std::vector<Arn>& arn);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getSchedulerOptionsDedicatedHostClusterId()const;
				void setSchedulerOptionsDedicatedHostClusterId(const std::string& schedulerOptionsDedicatedHostClusterId);
				std::string getSystemDiskDiskName()const;
				void setSystemDiskDiskName(const std::string& systemDiskDiskName);
				std::string getDedicatedHostId()const;
				void setDedicatedHostId(const std::string& dedicatedHostId);
				std::vector<std::string> getSecurityGroupIds()const;
				void setSecurityGroupIds(const std::vector<std::string>& securityGroupIds);
				int getSpotDuration()const;
				void setSpotDuration(int spotDuration);
				std::string getSystemDiskSize()const;
				void setSystemDiskSize(const std::string& systemDiskSize);
				std::string getImageFamily()const;
				void setImageFamily(const std::string& imageFamily);
				std::string getLaunchTemplateName()const;
				void setLaunchTemplateName(const std::string& launchTemplateName);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getHpcClusterId()const;
				void setHpcClusterId(const std::string& hpcClusterId);
				int getHttpPutResponseHopLimit()const;
				void setHttpPutResponseHopLimit(int httpPutResponseHopLimit);
				std::string getIsp()const;
				void setIsp(const std::string& isp);
				std::string getKeyPairName()const;
				void setKeyPairName(const std::string& keyPairName);
				float getSpotPriceLimit()const;
				void setSpotPriceLimit(float spotPriceLimit);
				int getStorageSetPartitionNumber()const;
				void setStorageSetPartitionNumber(int storageSetPartitionNumber);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getPrivatePoolOptionsId()const;
				void setPrivatePoolOptionsId(const std::string& privatePoolOptionsId);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				std::string getLaunchTemplateId()const;
				void setLaunchTemplateId(const std::string& launchTemplateId);
				int getIpv6AddressCount()const;
				void setIpv6AddressCount(int ipv6AddressCount);
				std::vector<std::string> getHostNames()const;
				void setHostNames(const std::vector<std::string>& hostNames);
				std::string getCapacityReservationPreference()const;
				void setCapacityReservationPreference(const std::string& capacityReservationPreference);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::vector<std::string> getIpv6Address()const;
				void setIpv6Address(const std::vector<std::string>& ipv6Address);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				int getCpuOptionsThreadsPerCore()const;
				void setCpuOptionsThreadsPerCore(int cpuOptionsThreadsPerCore);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getSecurityOptionsTrustedSystemMode()const;
				void setSecurityOptionsTrustedSystemMode(const std::string& securityOptionsTrustedSystemMode);
				std::string getCapacityReservationId()const;
				void setCapacityReservationId(const std::string& capacityReservationId);
				std::string getUserData()const;
				void setUserData(const std::string& userData);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getHttpEndpoint()const;
				void setHttpEndpoint(const std::string& httpEndpoint);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				std::vector<NetworkInterface> getNetworkInterface()const;
				void setNetworkInterface(const std::vector<NetworkInterface>& networkInterface);
				std::string getDeploymentSetId()const;
				void setDeploymentSetId(const std::string& deploymentSetId);
				int getAmount()const;
				void setAmount(int amount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getTenancy()const;
				void setTenancy(const std::string& tenancy);
				std::string getRamRoleName()const;
				void setRamRoleName(const std::string& ramRoleName);
				std::string getAutoReleaseTime()const;
				void setAutoReleaseTime(const std::string& autoReleaseTime);
				std::string getCreditSpecification()const;
				void setCreditSpecification(const std::string& creditSpecification);
				std::vector<DataDisk> getDataDisk()const;
				void setDataDisk(const std::vector<DataDisk>& dataDisk);
				long getLaunchTemplateVersion()const;
				void setLaunchTemplateVersion(long launchTemplateVersion);
				std::string getSchedulerOptionsManagedPrivateSpaceId()const;
				void setSchedulerOptionsManagedPrivateSpaceId(const std::string& schedulerOptionsManagedPrivateSpaceId);
				std::string getStorageSetId()const;
				void setStorageSetId(const std::string& storageSetId);
				std::string getHttpTokens()const;
				void setHttpTokens(const std::string& httpTokens);
				std::string getSystemDiskDescription()const;
				void setSystemDiskDescription(const std::string& systemDiskDescription);

            private:
				bool uniqueSuffix_;
				std::string securityEnhancementStrategy_;
				int minAmount_;
				bool deletionProtection_;
				std::string resourceGroupId_;
				std::string privatePoolOptionsMatchCriteria_;
				std::string hostName_;
				std::string password_;
				int deploymentSetGroupNo_;
				std::string systemDiskAutoSnapshotPolicyId_;
				int cpuOptionsCore_;
				int period_;
				bool dryRun_;
				std::string cpuOptionsNuma_;
				long ownerId_;
				std::string spotStrategy_;
				std::string privateIpAddress_;
				std::string periodUnit_;
				bool autoRenew_;
				std::string internetChargeType_;
				int internetMaxBandwidthIn_;
				std::string affinity_;
				std::string imageId_;
				std::string spotInterruptionBehavior_;
				int networkInterfaceQueueNumber_;
				std::string ioOptimized_;
				std::string securityGroupId_;
				bool hibernationOptionsConfigured_;
				std::string systemDiskPerformanceLevel_;
				bool passwordInherit_;
				std::string instanceType_;
				std::vector<Arn> arn_;
				std::string resourceOwnerAccount_;
				std::string schedulerOptionsDedicatedHostClusterId_;
				std::string systemDiskDiskName_;
				std::string dedicatedHostId_;
				std::vector<std::string> securityGroupIds_;
				int spotDuration_;
				std::string systemDiskSize_;
				std::string imageFamily_;
				std::string launchTemplateName_;
				long resourceOwnerId_;
				std::string hpcClusterId_;
				int httpPutResponseHopLimit_;
				std::string isp_;
				std::string keyPairName_;
				float spotPriceLimit_;
				int storageSetPartitionNumber_;
				std::vector<Tag> tag_;
				std::string privatePoolOptionsId_;
				int autoRenewPeriod_;
				std::string launchTemplateId_;
				int ipv6AddressCount_;
				std::vector<std::string> hostNames_;
				std::string capacityReservationPreference_;
				std::string vSwitchId_;
				std::string instanceName_;
				std::string zoneId_;
				std::vector<std::string> ipv6Address_;
				std::string clientToken_;
				int internetMaxBandwidthOut_;
				std::string description_;
				int cpuOptionsThreadsPerCore_;
				std::string systemDiskCategory_;
				std::string securityOptionsTrustedSystemMode_;
				std::string capacityReservationId_;
				std::string userData_;
				std::string regionId_;
				std::string httpEndpoint_;
				std::string instanceChargeType_;
				std::vector<NetworkInterface> networkInterface_;
				std::string deploymentSetId_;
				int amount_;
				std::string ownerAccount_;
				std::string tenancy_;
				std::string ramRoleName_;
				std::string autoReleaseTime_;
				std::string creditSpecification_;
				std::vector<DataDisk> dataDisk_;
				long launchTemplateVersion_;
				std::string schedulerOptionsManagedPrivateSpaceId_;
				std::string storageSetId_;
				std::string httpTokens_;
				std::string systemDiskDescription_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_RUNINSTANCESREQUEST_H_