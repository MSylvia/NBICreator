//
//  NBCConstants.h
//  NBICreator
//
//  Created by Erik Berglund.
//  Copyright (c) 2015 NBICreator. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////////////////////////
#pragma mark Application
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCBundleIdentifier;
extern NSString *const NBCBundleIdentifierHelper;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Workflow Types
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCWorkflowTypeNetInstall;
extern NSString *const NBCWorkflowTypeDeployStudio;
extern NSString *const NBCWorkflowTypeImagr;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Folders
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCFolderTemplatesNetInstall;
extern NSString *const NBCFolderTemplatesDeployStudio;
extern NSString *const NBCFolderTemplatesImagr;
extern NSString *const NBCFolderTemplatesCasper;
extern NSString *const NBCFolderTemplatesCustom;
extern NSString *const NBCFolderTemplatesDisabled;
extern NSString *const NBCFolderResources;
extern NSString *const NBCFolderResourcesDeployStudio;
extern NSString *const NBCFolderResourcesPython;
extern NSString *const NBCFolderResourcesImagr;
extern NSString *const NBCFolderResourcesCasper;
extern NSString *const NBCFolderResourcesSource;

////////////////////////////////////////////////////////////////////////////////
#pragma mark File Names
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCFileNameResourcesDict;
extern NSString *const NBCFileNameDownloadsDict;
extern NSString *const NBCFileNameNetInstallDefaults;
extern NSString *const NBCFileNameDeployStudioDefaults;
extern NSString *const NBCFileNameImagrDefaults;
extern NSString *const NBCFileNameCasperDefaults;

////////////////////////////////////////////////////////////////////////////////
#pragma mark File Paths
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCFilePathNBIIconImagr;
extern NSString *const NBCFilePathNBIIconNetInstall;
extern NSString *const NBCFilePathNBIIconDeployStudio;
extern NSString *const NBCFilePathNBIIconCasper;
extern NSString *const NBCFilePathPreferencesGlobal;
extern NSString *const NBCFilePathPreferencesHIToolbox;

////////////////////////////////////////////////////////////////////////////////
#pragma mark User Defaults
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCUserDefaultsIndexCounter;
extern NSString *const NBCUserDefaultsNetBootSelection;
extern NSString *const NBCUserDefaultsDateFormatString;
extern NSString *const NBCUserDefaultsLogLevel;
extern NSString *const NBCUserDefaultsCheckForUpdates;
extern NSString *const NBCUserDefaultsUserNotificationsEnabled;
extern NSString *const NBCUserDefaultsUserNotificationsSoundEnabled;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Menu Items
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCMenuItemUntitled;
extern NSString *const NBCMenuItemNew;
extern NSString *const NBCMenuItemSave;
extern NSString *const NBCMenuItemSaveAs;
extern NSString *const NBCMenuItemExport;
extern NSString *const NBCMenuItemRename;
extern NSString *const NBCMenuItemDelete;
extern NSString *const NBCMenuItemShowInFinder;
extern NSString *const NBCMenuItemImagrVersionLatest;
extern NSString *const NBCMenuItemImagrVersionLocal;
extern NSString *const NBCMenuItemDeployStudioVersionLatest;
extern NSString *const NBCMenuItemRestoreOriginalIcon;
extern NSString *const NBCMenuItemRestoreOriginalBackground;
extern NSString *const NBCMenuItemNoSelection;
extern NSString *const NBCMenuItemNBICreator;
extern NSString *const NBCMenuItemSystemImageUtility;
extern NSString *const NBCMenuItemCurrent;
extern NSString *const NBCMenuItemWorkflows;
extern NSString *const NBCMenuItemMainWindow;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Buttons
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCButtonTitleCancel;
extern NSString *const NBCButtonTitleContinue;
extern NSString *const NBCButtonTitleOK;
extern NSString *const NBCButtonTitleSave;
extern NSString *const NBCButtonTitleQuit;
extern NSString *const NBCButtonTitleVerify;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Template Values - Main
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCSettingsFileVersion;
extern NSString *const NBCSettingsTypeNetInstall;
extern NSString *const NBCSettingsTypeDeployStudio;
extern NSString *const NBCSettingsTypeImagr;
extern NSString *const NBCSettingsTypeCasper;
extern NSString *const NBCSettingsTypeCustom;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Template Keys - Main
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCSettingsTitleKey;
extern NSString *const NBCSettingsTypeKey;
extern NSString *const NBCSettingsVersionKey;
extern NSString *const NBCSettingsSettingsKey;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Template Keys - General
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCSettingsNameKey;
extern NSString *const NBCSettingsIndexKey;
extern NSString *const NBCSettingsProtocolKey;
extern NSString *const NBCSettingsEnabledKey;
extern NSString *const NBCSettingsDefaultKey;
extern NSString *const NBCSettingsLanguageKey;
extern NSString *const NBCSettingsTimeZoneKey;
extern NSString *const NBCSettingsKeyboardLayoutKey;
extern NSString *const NBCSettingsDescriptionKey;
extern NSString *const NBCSettingsDestinationFolderKey;
extern NSString *const NBCSettingsIconKey;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Template Keys - Options
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCSettingsDisableWiFiKey;
extern NSString *const NBCSettingsDisableBluetoothKey;
extern NSString *const NBCSettingsDisplaySleepKey;
extern NSString *const NBCSettingsDisplaySleepMinutesKey;
extern NSString *const NBCSettingsIncludeSystemUIServerKey;
extern NSString *const NBCSettingsIncludeRubyKey;
extern NSString *const NBCSettingsARDLoginKey;
extern NSString *const NBCSettingsARDPasswordKey;
extern NSString *const NBCSettingsUseNetworkTimeServerKey;
extern NSString *const NBCSettingsNetworkTimeServerKey;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Template Keys - Extra
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCSettingsCertificatesKey;
extern NSString *const NBCSettingsPackagesKey;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Template Keys - Advanced
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCSettingsAddTrustedNetBootServersKey;
extern NSString *const NBCSettingsTrustedNetBootServersKey;
extern NSString *const NBCSettingsAddCustomRAMDisksKey;
extern NSString *const NBCSettingsRAMDisksKey;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Template Keys - Debug
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCSettingsUseVerboseBootKey;
extern NSString *const NBCSettingsDiskImageReadWriteKey;
extern NSString *const NBCSettingsIncludeConsoleAppKey;
extern NSString *const NBCSettingsLaunchConsoleAppKey;
extern NSString *const NBCSettingsEnableLaunchdLoggingKey;

////////////////////////////////////////////////////////////////////////////////
#pragma mark Template Keys - NetInstall
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
#pragma mark Template Keys - DeployStudio
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
#pragma mark Template Keys - Imagr
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
#pragma mark Template Keys - Casper
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCSettingsCasperJSSURLKey;
extern NSString *const NBCSettingsCasperImagingPathKey;
extern NSString *const NBCSettingsCasperImagingDebugModeKey;
extern NSString *const NBCSettingsCasperAllowInvalidCertificateKey;
extern NSString *const NBCSettingsCasperJSSCACertificateKey;

////////////////////////////////////////////////////////////////////////////////
#pragma mark NBImageInfo Keys
////////////////////////////////////////////////////////////////////////////////
extern NSString *const NBCNBImageInfoDictNameKey;
extern NSString *const NBCNBImageInfoDictDescriptionKey;
extern NSString *const NBCNBImageInfoDictIndexKey;
extern NSString *const NBCNBImageInfoDictIsDefaultKey;
extern NSString *const NBCNBImageInfoDictIsEnabledKey;
extern NSString *const NBCNBImageInfoDictLanguageKey;
extern NSString *const NBCNBImageInfoDictProtocolKey;





extern NSString *const NBCSettingsNBICreationToolKey;
extern NSString *const NBCSettingsKeyboardLayoutID;
extern NSString *const NBCSettingsLocale;
extern NSString *const NBCSettingsCountry;



// --------------------------------------------------------------
//  Template Settings Imagr
// --------------------------------------------------------------
extern NSString *const NBCSettingsImagrVersion;
extern NSString *const NBCSettingsImagrIncludePreReleaseVersions;
extern NSString *const NBCSettingsImagrConfigurationURL;
extern NSString *const NBCSettingsImagrReportingURL;
extern NSString *const NBCSettingsImagrServerURLKey;
extern NSString *const NBCSettingsImagrSyslogServerURI;
extern NSString *const NBCSettingsImagrDownloadURL;
extern NSString *const NBCSettingsImagrDownloadPython;
extern NSString *const NBCSettingsImagrUseLocalVersion;
extern NSString *const NBCSettingsImagrLocalVersionPath;
extern NSString *const NBCSettingsImagrSourceIsNBI;
extern NSString *const NBCSettingsImagrDisableATS;
extern NSString *const NBCSettingsImagrVersionLatest;

// --------------------------------------------------------------
//  Template Settings DeployStudio
// --------------------------------------------------------------
extern NSString *const NBCSettingsDeployStudioTimeServerKey;
extern NSString *const NBCSettingsDeployStudioUseCustomServersKey;
extern NSString *const NBCSettingsDeployStudioServerURL1Key;
extern NSString *const NBCSettingsDeployStudioServerURL2Key;
extern NSString *const NBCSettingsDeployStudioDisableVersionMismatchAlertsKey;
extern NSString *const NBCSettingsDeployStudioRuntimeLoginKey;
extern NSString *const NBCSettingsDeployStudioRuntimePasswordKey;
extern NSString *const NBCSettingsDeployStudioDisplayLogWindowKey;
extern NSString *const NBCSettingsDeployStudioSleepKey;
extern NSString *const NBCSettingsDeployStudioSleepDelayKey;
extern NSString *const NBCSettingsDeployStudioRebootKey;
extern NSString *const NBCSettingsDeployStudioRebootDelayKey;
extern NSString *const NBCSettingsDeployStudioIncludePythonKey;
extern NSString *const NBCSettingsDeployStudioIncludeRubyKey;
extern NSString *const NBCSettingsDeployStudioUseCustomTCPStackKey;
extern NSString *const NBCSettingsDeployStudioDisableWirelessSupportKey;
extern NSString *const NBCSettingsDeployStudioUseSMB1Key;
extern NSString *const NBCSettingsDeployStudioUseCustomRuntimeTitleKey;
extern NSString *const NBCSettingsDeployStudioRuntimeTitleKey;

extern NSString *const NBCSettingsUseBackgroundImageKey;
extern NSString *const NBCSettingsBackgroundImageKey;

extern NSString *const NBCBackgroundImageDefaultPath;

// --------------------------------------------------------------
//  Template Settings Python
// --------------------------------------------------------------
extern NSString *const NBCSettingsPythonVersion;
extern NSString *const NBCSettingsPythonDownloadURL;
extern NSString *const NBCSettingsPythonDefaultVersion;

// --------------------------------------------------------------
//  NBImageInfo
// --------------------------------------------------------------


// --------------------------------------------------------------
//  Workflow Types
// --------------------------------------------------------------
extern NSString *const NBCWorkflowNBI;
extern NSString *const NBCWorkflowNBIResources;
extern NSString *const NBCWorkflowNBIModify;

// --------------------------------------------------------------
//  Notifications
// --------------------------------------------------------------

// Workflows
extern NSString *const NBCNotificationAddWorkflowItemToQueue;
extern NSString *const NBCNotificationWorkflowCompleteNBI;
extern NSString *const NBCNotificationWorkflowCompleteResources;
extern NSString *const NBCNotificationWorkflowCompleteModifyNBI;
extern NSString *const NBCNotificationWorkflowFailed;

// Workflows UserInfoKeys
extern NSString *const NBCNotificationAddWorkflowItemToQueueUserInfoWorkflowItem;
extern NSString *const NBCNotificationRemoveWorkflowItemUserInfoWorkflowItem;
extern NSString *const NBCUserInfoNSErrorKey;

// Imagr
extern NSString *const NBCNotificationImagrUpdateSource;
extern NSString *const NBCNotificationImagrRemovedSource;
extern NSString *const NBCNotificationImagrUpdateNBIIcon;
extern NSString *const NBCNotificationImagrUpdateNBIBackground;
extern NSString *const NBCNotificationImagrVerifyDroppedSource;

// DeployStudio
extern NSString *const NBCNotificationDeployStudioUpdateSource;
extern NSString *const NBCNotificationDeployStudioRemovedSource;
extern NSString *const NBCNotificationDeployStudioUpdateNBIIcon;
extern NSString *const NBCNotificationDeployStudioUpdateNBIBackground;
extern NSString *const NBCNotificationDeployStudioAddBonjourService;
extern NSString *const NBCNotificationDeployStudioRemoveBonjourService;
extern NSString *const NBCNotificationDeployStudioVerifyDroppedSource;

// NetInstall
extern NSString *const NBCNotificationNetInstallUpdateSource;
extern NSString *const NBCNotificationNetInstallRemovedSource;
extern NSString *const NBCNotificationNetInstallUpdateNBIIcon;
extern NSString *const NBCNotificationNetInstallVerifyDroppedSource;

// Casper
extern NSString *const NBCNotificationCasperUpdateSource;
extern NSString *const NBCNotificationCasperRemovedSource;
extern NSString *const NBCNotificationCasperUpdateNBIIcon;
extern NSString *const NBCNotificationCasperUpdateNBIBackground;
extern NSString *const NBCNotificationCasperVerifyDroppedSource;

// Imagr / DeployStudio / NetInstall UserInfoKeys
extern NSString *const NBCNotificationVerifyDroppedSourceUserInfoSourceURL;

// Update Button Build
extern NSString *const NBCNotificationUpdateButtonBuild;

// Update Button Build UserInfoKeys
extern NSString *const NBCNotificationUpdateButtonBuildUserInfoButtonState;

// Update Source UserInfoKeys
extern NSString *const NBCNotificationUpdateSourceUserInfoSource;
extern NSString *const NBCNotificationUpdateSourceUserInfoTarget;

// Update NBI Icon UserInfoKeys
extern NSString *const NBCNotificationUpdateNBIIconUserInfoIconURL;

// Update NBI Background UserInfoKeys
extern NSString *const NBCNotificationUpdateNBIBackgroundUserInfoIconURL;

extern NSString *const NBCNotificationStartSearchingForUpdates;
extern NSString *const NBCNotificationStopSearchingForUpdates;

// --------------------------------------------------------------
//  Imagr
// --------------------------------------------------------------
extern NSString *const NBCImagrApplicationURL;
extern NSString *const NBCImagrConfigurationPlistURL;
extern NSString *const NBCImagrRCImagingURL;

// --------------------------------------------------------------
//  System Image Utility
// --------------------------------------------------------------
extern NSString *const NBCSystemImageUtilityScriptCreateCommon;
extern NSString *const NBCSystemImageUtilityScriptCreateNetBoot;
extern NSString *const NBCSystemImageUtilityScriptCreateNetInstall;
extern NSString *const NBCSystemImageUtilityNetBootImageSize;

// --------------------------------------------------------------
//  Buttons
// --------------------------------------------------------------


// --------------------------------------------------------------
//  Alerts
// --------------------------------------------------------------
extern NSString *const NBCAlertTagKey;
extern NSString *const NBCAlertTagSettingsWarning;
extern NSString *const NBCAlertTagSettingsUnsaved;
extern NSString *const NBCAlertTagSettingsUnsavedQuit;
extern NSString *const NBCAlertTagSettingsUnsavedBuild;
extern NSString *const NBCAlertTagDeleteTemplate;
extern NSString *const NBCAlertTagWorkflowRunningQuit;
extern NSString *const NBCAlertWorkflowItemKey;

extern NSString *const NBCAlertUserInfoSelectedTemplate;
extern NSString *const NBCAlertUserInfoTemplateURL;
extern NSString *const NBCAlertUserInfoBuildNBI;

extern NSString *const NBCErrorDomain;

extern NSString *const NBCWorkflowNetInstallLogPrefix;

extern NSString *const NBCDeployStudioRepository;

extern NSString *const NBCPythonRepositoryURL;
extern NSString *const NBCPythonInstallerPathInDiskImage;

extern NSString *const NBCSettingsError;
extern NSString *const NBCSettingsWarning;

extern NSString *const NBCDeployStudioTabTitleRuntime;
extern NSString *const NBCDeployStudioBackgroundDefaultPath;
extern NSString *const NBCDeployStudioBackgroundImageDefaultPath;

extern NSString *const NBCSettingsSourceItemsKey;
extern NSString *const NBCSettingsSourceItemsPathKey;
extern NSString *const NBCSettingsSourceItemsRegexKey;
extern NSString *const NBCSettingsSourceItemsCacheFolderKey;

extern NSString *const NBCImagrBundleIdentifier;
extern NSString *const NBCCasperImagingBundleIdentifier;

extern NSString *const NBCCasperJSSCertificateURLPath;

extern NSString *const NBCDownloaderTag;
extern NSString *const NBCDownloaderTagPython;
extern NSString *const NBCDownloaderTagImagr;
extern NSString *const NBCDownloaderTagDeployStudio;
extern NSString *const NBCDownloaderTagNBICreator;
extern NSString *const NBCDownloaderTagNBICreatorResources;
extern NSString *const NBCDownloaderTagJSSCertificate;
extern NSString *const NBCDownloaderTagJSSVerify;
extern NSString *const NBCDownloaderVersion;

extern NSString *const NBCTargetFolderMinFreeSizeInGB;

// --------------------------------------------------------------
//  Workflow Copy
// --------------------------------------------------------------
extern NSString *const NBCWorkflowCopyType;
extern NSString *const NBCWorkflowCopy;
extern NSString *const NBCWorkflowCopySourceURL;
extern NSString *const NBCWorkflowCopyTargetURL;
extern NSString *const NBCWorkflowCopyAttributes;
extern NSString *const NBCWorkflowCopyRegex;
extern NSString *const NBCWorkflowCopyRegexSourceFolderURL;
extern NSString *const NBCWorkflowCopyRegexTargetFolderURL;

// --------------------------------------------------------------
//  Workflow Modify
// --------------------------------------------------------------
extern NSString *const NBCWorkflowModify;
extern NSString *const NBCWorkflowModifyAttributes;
extern NSString *const NBCWorkflowModifyTargetURL;
extern NSString *const NBCWorkflowModifySourceURL;
extern NSString *const NBCWorkflowModifyContent;
extern NSString *const NBCWorkflowModifyFileType;
extern NSString *const NBCWorkflowModifyFileTypePlist;
extern NSString *const NBCWorkflowModifyFileTypeGeneric;
extern NSString *const NBCWorkflowModifyFileTypeFolder;
extern NSString *const NBCWorkflowModifyFileTypeDelete;
extern NSString *const NBCWorkflowModifyFileTypeLink;
extern NSString *const NBCWorkflowModifyFileTypeMove;

// --------------------------------------------------------------
//  Workflow Install
// --------------------------------------------------------------
extern NSString *const NBCWorkflowInstall;
extern NSString *const NBCWorkflowInstallerName;
extern NSString *const NBCWorkflowInstallerSourceURL;
extern NSString *const NBCWorkflowInstallerChoiceChangeXML;


// --------------------------------------------------------------
//  Imagr
// --------------------------------------------------------------
extern NSString *const NBCImagrApplicationTargetURL;
extern NSString *const NBCImagrApplicationNBICreatorTargetURL;
extern NSString *const NBCImagrConfigurationPlistTargetURL;
extern NSString *const NBCImagrConfigurationPlistNBICreatorTargetURL;

extern NSString *const NBCImagrRCInstallTargetURL;
extern NSString *const NBCImagrGitHubRepository;


extern NSString *const NBCCasperImagingApplicationTargetURL;
extern NSString *const NBCCasperImagingApplicationNBICreatorTargetURL;

extern NSString *const NBCNBICreatorGitHubRepository;
extern NSString *const NBCNBICreatorResourcesGitHubRepository;

extern NSString *const NBCRCImagingTargetURL;
extern NSString *const NBCRCImagingNBICreatorTargetURL;


extern NSString *const NBCJSSPreferencePlistTargetURL;
extern NSString *const NBCJSSPreferencePlistNBICreatorTargetURL;

extern NSString *const IconSuccessPath;

// --------------------------------------------------------------
//  Certificate TableView Keys
// --------------------------------------------------------------
extern NSString *const NBCDictionaryKeyCertificate;
extern NSString *const NBCDictionaryKeyCertificateURL;
extern NSString *const NBCDictionaryKeyCertificateName;
extern NSString *const NBCDictionaryKeyCertificateIcon;
extern NSString *const NBCDictionaryKeyCertificateAuthority;
extern NSString *const NBCDictionaryKeyCertificateSignature;
extern NSString *const NBCDictionaryKeyCertificateSelfSigned;
extern NSString *const NBCDictionaryKeyCertificateSerialNumber;
extern NSString *const NBCDictionaryKeyCertificateNotValidBeforeDate;
extern NSString *const NBCDictionaryKeyCertificateNotValidAfterDate;
extern NSString *const NBCDictionaryKeyCertificateExpirationString;
extern NSString *const NBCDictionaryKeyCertificateExpired;


extern NSString *const NBCDictionaryKeyPackagePath;
extern NSString *const NBCDictionaryKeyPackageName;


extern NSString *const NBCCertificatesNBICreatorTargetURL;
extern NSString *const NBCCertificatesTargetURL;
extern NSString *const NBCScriptsNBICreatorTargetPath;
extern NSString *const NBCScriptsTargetPath;
extern NSString *const NBCApplicationsTargetPath;


extern NSString *const NBCNetworkTimeServerDefault;

extern NSString *const NBCNBIDescriptionSIU;
extern NSString *const NBCNBIDescriptionNBC;

extern NSString *const NBCDiskDeviceModelDiskImage;

extern NSString *const NBCBonjourServiceDeployStudio;
extern NSString *const NBCDeployStudioLatestVersionURL;

extern NSString *const NBCResourcesDeployStudioLatestVersionKey;



extern NSString *const NBCHelpURL;

extern NSString *const NBCVariableIndexCounter;
extern NSString *const NBCVariableDate;
extern NSString *const NBCVariableNBICreatorVersion;
extern NSString *const NBCVariableCasperImagingVersion;
extern NSString *const NBCVariableApplicationResourcesURL;

extern NSString *const NBCTableViewIdentifierCertificates;
extern NSString *const NBCTableViewIdentifierPackages;
extern NSString *const NBCTableViewIdentifierImagrTrustedServers;
extern NSString *const NBCTableViewIdentifierCasperTrustedServers;
extern NSString *const NBCTableViewIdentifierImagrRAMDisks;
extern NSString *const NBCTableViewIdentifierCasperRAMDisks;

extern NSString *const NBCDiskImageFormatReadOnly;
extern NSString *const NBCDiskImageFormatReadWrite;
extern NSString *const NBCDiskImageFormatSparseImage;

extern NSString *const NBCTabViewItemGeneral;
extern NSString *const NBCTabViewItemOptions;
extern NSString *const NBCTabViewItemExtra;
extern NSString *const NBCTabViewItemAdvanced;
extern NSString *const NBCTabViewItemDebug;


extern NSString *const NBCCLIArgumentSource;
extern NSString *const NBCCLIArgumentTemplate;
extern NSString *const NBCCLIArgumentTarget;
extern NSString *const NBCCLIArgumentNoPrompt;
extern NSString *const NBCCLIArgumentQuiet;

