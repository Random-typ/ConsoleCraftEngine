#pragma once
#include "Core/GameObject.h"
#include "Item.h"
#include "HeartItem.h"
class GridUnit : public GameObject
{
public:
    GridUnit(Scene& scene) :GameObject("GridObject", scene) 
    {
        
    }
    void Init() override;

    void OnCreatingLine();
    void OnSelected();
    void OnUnselected();

    Vector2 GetItemSlot()
    {
        return Vector2(transform.Position.X + 1, transform.Position.Y + 1);
    }

    Item* UnitItem = nullptr;
};
