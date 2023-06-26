// Fill out your copyright notice in the Description page of Project Settings.


#include "AimWidget.h"

void UAimWidget::SetCrosshairsVisibility(bool _isVisible)
{
	if (_isVisible)
	{
		CrossHairsImage->SetVisibility(ESlateVisibility::HitTestInvisible);
	}
	else
	{
		CrossHairsImage->SetVisibility(ESlateVisibility::Hidden);

	}
}