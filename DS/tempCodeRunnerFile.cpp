if ( itIsLastNode(&iterator,key))
            {
                predecessor->next = nullptr;
                delete iterator;
                return;
            }