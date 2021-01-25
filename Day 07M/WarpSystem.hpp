/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07M-arthur.robine
** File description:
** Exercice 0
*/

#ifndef B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_WARPSYSTEM_HPP
#define B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_WARPSYSTEM_HPP

namespace WarpSystem
{
    class QuantumReactor {
        public:
            QuantumReactor();
            ~QuantumReactor();
            bool isStable();
            void setStability(bool stability);
        private:
            bool _stability;
    };
    class Core {
        public:
            Core(QuantumReactor *coreReactor);
            ~Core();
            QuantumReactor *checkReactor();
        private:
            QuantumReactor *_coreReactor;
    };
}

#endif //B_CPP_300_STG_3_1_CPPD07M_ARTHUR_ROBINE_WARPSYSTEM_HPP
