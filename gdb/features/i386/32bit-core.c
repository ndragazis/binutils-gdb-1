/* THIS FILE IS GENERATED.  -*- buffer-read-only: t -*- vi:set ro:
  Original: 32bit-core.xml */

#include "arch/tdesc.h"

static int
create_feature_i386_32bit_core (struct target_desc *result, long regnum)
{
  struct tdesc_feature *feature;

  feature = tdesc_create_feature (result, "org.gnu.gdb.i386.core", "32bit-core.xml");
  tdesc_type_with_fields *type_with_fields;
  tdesc_type *field_type;
  type_with_fields = tdesc_create_flags (feature, "i386_eflags", 4);
  tdesc_add_flag (type_with_fields, 0, "CF");
  tdesc_add_flag (type_with_fields, 1, "");
  tdesc_add_flag (type_with_fields, 2, "PF");
  tdesc_add_flag (type_with_fields, 4, "AF");
  tdesc_add_flag (type_with_fields, 6, "ZF");
  tdesc_add_flag (type_with_fields, 7, "SF");
  tdesc_add_flag (type_with_fields, 8, "TF");
  tdesc_add_flag (type_with_fields, 9, "IF");
  tdesc_add_flag (type_with_fields, 10, "DF");
  tdesc_add_flag (type_with_fields, 11, "OF");
  tdesc_add_flag (type_with_fields, 14, "NT");
  tdesc_add_flag (type_with_fields, 16, "RF");
  tdesc_add_flag (type_with_fields, 17, "VM");
  tdesc_add_flag (type_with_fields, 18, "AC");
  tdesc_add_flag (type_with_fields, 19, "VIF");
  tdesc_add_flag (type_with_fields, 20, "VIP");
  tdesc_add_flag (type_with_fields, 21, "ID");

  tdesc_create_reg (feature, "eax", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "ecx", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "edx", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "ebx", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "esp", regnum++, 1, NULL, 32, "data_ptr");
  tdesc_create_reg (feature, "ebp", regnum++, 1, NULL, 32, "data_ptr");
  tdesc_create_reg (feature, "esi", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "edi", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "eip", regnum++, 1, NULL, 32, "code_ptr");
  tdesc_create_reg (feature, "eflags", regnum++, 1, NULL, 32, "i386_eflags");
  tdesc_create_reg (feature, "cs", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "ss", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "ds", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "es", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "fs", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "gs", regnum++, 1, NULL, 32, "int32");
  tdesc_create_reg (feature, "st0", regnum++, 1, NULL, 80, "i387_ext");
  tdesc_create_reg (feature, "st1", regnum++, 1, NULL, 80, "i387_ext");
  tdesc_create_reg (feature, "st2", regnum++, 1, NULL, 80, "i387_ext");
  tdesc_create_reg (feature, "st3", regnum++, 1, NULL, 80, "i387_ext");
  tdesc_create_reg (feature, "st4", regnum++, 1, NULL, 80, "i387_ext");
  tdesc_create_reg (feature, "st5", regnum++, 1, NULL, 80, "i387_ext");
  tdesc_create_reg (feature, "st6", regnum++, 1, NULL, 80, "i387_ext");
  tdesc_create_reg (feature, "st7", regnum++, 1, NULL, 80, "i387_ext");
  tdesc_create_reg (feature, "fctrl", regnum++, 1, "float", 32, "int");
  tdesc_create_reg (feature, "fstat", regnum++, 1, "float", 32, "int");
  tdesc_create_reg (feature, "ftag", regnum++, 1, "float", 32, "int");
  tdesc_create_reg (feature, "fiseg", regnum++, 1, "float", 32, "int");
  tdesc_create_reg (feature, "fioff", regnum++, 1, "float", 32, "int");
  tdesc_create_reg (feature, "foseg", regnum++, 1, "float", 32, "int");
  tdesc_create_reg (feature, "fooff", regnum++, 1, "float", 32, "int");
  tdesc_create_reg (feature, "fop", regnum++, 1, "float", 32, "int");
  return regnum;
}
