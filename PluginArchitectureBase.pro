TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS += \
	extensionsystem_lib \
	application_bin \
	plugins_shared


extensionsystem_lib.subdir = src/extensionsystem

application_bin.subdir = src/application
application_bin.depends = extensionsystem_lib

plugins_shared.subdir = src/plugins
plugins_shared.depends = extensionsystem_lib
