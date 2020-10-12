#pragma once

#include "EngineMinimal.h"

UENUM(BlueprintType, Meta = (Bitflags))
enum class EDir : uint8
{
	Front,
	Back,
	Left,
	Right,
	Up,
	Down
};