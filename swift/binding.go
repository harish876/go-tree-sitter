package swift

//#include "parser.h"
//TSLanguage *tree_sitter_swift();
import "C"
import (
	"unsafe"

	sitter "github.com/harish876/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_swift())
	return sitter.NewLanguage(ptr)
}
