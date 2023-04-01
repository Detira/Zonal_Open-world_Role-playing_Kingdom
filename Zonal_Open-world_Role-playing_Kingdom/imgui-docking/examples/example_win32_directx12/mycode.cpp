#include "mycode.h"

#include "imgui.h"

namespace My {

    void Show() {
        ImGui::Begin("My Window");
        ImGui::Text("Hello, World!");
        ImGui::End();
    }

}
