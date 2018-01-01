
#include "OracleStaticLibrary.h"

FBuildData UOracleStaticLibrary::GetBuildData()
{
	return FBuildData();
}

void UOracleStaticLibrary::EnableSplitscreen(UObject* context, bool enabled)
{
	if (context)
	{
		UWorld* world =	context->GetWorld();
		if (world)
		{
			UGameViewportClient* view = world->GetGameViewport();
			if (view)
			{
				view->SetDisableSplitscreenOverride(!enabled);
			}
		}
	}
}

bool UOracleStaticLibrary::CheckIfInEditor()
{
#if WITH_EDITOR
	return true;
#endif
	return false;
}

	//Get Unix Timestamp
static FDateTime GetFileTimeStamp(const FString& File)
{
	return FPlatformFileManager::Get().GetPlatformFile().GetTimeStamp(*File);
}
static void SetTimeStamp(const FString& File, const FDateTime& TimeStamp)
{
	FPlatformFileManager::Get().GetPlatformFile().SetTimeStamp(*File, TimeStamp);
}

TArray<FString> UOracleStaticLibrary::GetAllSaveGameSlotNames()
{
	//Make an array of savegame strings
	class FFindSavesVisitor : public IPlatformFile::FDirectoryVisitor
	{
	public:
		FFindSavesVisitor() {}

		virtual bool Visit(const TCHAR* FilenameOrDirectory, bool bIsDirectory)
		{
			if (!bIsDirectory)
			{
				FString FullFilePath(FilenameOrDirectory);
				if (FPaths::GetExtension(FullFilePath) == TEXT("sav"))
				{
					FString CleanFilename = FPaths::GetBaseFilename(FullFilePath);
					CleanFilename = CleanFilename.Replace(TEXT(".sav"), TEXT(""));
					SavesFound.Add(CleanFilename);
				}
			}
			return true;
		}
		TArray<FString> SavesFound;
	};
	//Set SaveGame folder

	TArray<FString> Saves;
	const FString SavesFolder = FPaths::ProjectSavedDir() + TEXT("SaveGames");

	if (!SavesFolder.IsEmpty())
	{
		FFindSavesVisitor Visitor;
		FPlatformFileManager::Get().GetPlatformFile().IterateDirectory(*SavesFolder, Visitor);
		Saves = Visitor.SavesFound;
	}

	return Saves;
}

bool UOracleStaticLibrary::IsInMobilePreview()
{
   //return GMaxRHIFeatureLevel <= ERHIFeatureLevel::ES3_1;
   return false;
}