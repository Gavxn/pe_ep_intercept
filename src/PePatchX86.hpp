//
// Created by gavxn on 15/08/2017.
//

#ifndef PE_EP_INTERCEPT_PEPATCHX86_HPP
#define PE_EP_INTERCEPT_PEPATCHX86_HPP

#include "PePatch.hpp"

namespace PeEpIntercept {
    class PePatchX86 : public PePatch {
    private:
        OptionalHeaderX86 optional_header;
    public:
        explicit PePatchX86(std::string &path);

        void AddSection(const std::string &name, uint32_t code_size) override;

        void SaveFile(std::string new_path, std::vector<char> code_buffer) override;
    };
}


#endif //PE_EP_INTERCEPT_PEPATCHX86_HPP