# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:srv/GetPreAssemblyPoses.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPreAssemblyPoses_Request(type):
    """Metaclass of message 'GetPreAssemblyPoses_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ariac_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ariac_msgs.srv.GetPreAssemblyPoses_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_pre_assembly_poses__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_pre_assembly_poses__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_pre_assembly_poses__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_pre_assembly_poses__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_pre_assembly_poses__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPreAssemblyPoses_Request(metaclass=Metaclass_GetPreAssemblyPoses_Request):
    """Message class 'GetPreAssemblyPoses_Request'."""

    __slots__ = [
        '_order_id',
    ]

    _fields_and_field_types = {
        'order_id': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.order_id = kwargs.get('order_id', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.order_id != other.order_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def order_id(self):
        """Message field 'order_id'."""
        return self._order_id

    @order_id.setter
    def order_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'order_id' field must be of type 'str'"
        self._order_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPreAssemblyPoses_Response(type):
    """Metaclass of message 'GetPreAssemblyPoses_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ariac_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ariac_msgs.srv.GetPreAssemblyPoses_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_pre_assembly_poses__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_pre_assembly_poses__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_pre_assembly_poses__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_pre_assembly_poses__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_pre_assembly_poses__response

            from ariac_msgs.msg import PartPose
            if PartPose.__class__._TYPE_SUPPORT is None:
                PartPose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPreAssemblyPoses_Response(metaclass=Metaclass_GetPreAssemblyPoses_Response):
    """Message class 'GetPreAssemblyPoses_Response'."""

    __slots__ = [
        '_valid_id',
        '_agv_at_station',
        '_parts',
    ]

    _fields_and_field_types = {
        'valid_id': 'boolean',
        'agv_at_station': 'boolean',
        'parts': 'sequence<ariac_msgs/PartPose>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'PartPose')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.valid_id = kwargs.get('valid_id', bool())
        self.agv_at_station = kwargs.get('agv_at_station', bool())
        self.parts = kwargs.get('parts', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.valid_id != other.valid_id:
            return False
        if self.agv_at_station != other.agv_at_station:
            return False
        if self.parts != other.parts:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def valid_id(self):
        """Message field 'valid_id'."""
        return self._valid_id

    @valid_id.setter
    def valid_id(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid_id' field must be of type 'bool'"
        self._valid_id = value

    @property
    def agv_at_station(self):
        """Message field 'agv_at_station'."""
        return self._agv_at_station

    @agv_at_station.setter
    def agv_at_station(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'agv_at_station' field must be of type 'bool'"
        self._agv_at_station = value

    @property
    def parts(self):
        """Message field 'parts'."""
        return self._parts

    @parts.setter
    def parts(self, value):
        if __debug__:
            from ariac_msgs.msg import PartPose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PartPose) for v in value) and
                 True), \
                "The 'parts' field must be a set or sequence and each value of type 'PartPose'"
        self._parts = value


class Metaclass_GetPreAssemblyPoses(type):
    """Metaclass of service 'GetPreAssemblyPoses'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ariac_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ariac_msgs.srv.GetPreAssemblyPoses')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_pre_assembly_poses

            from ariac_msgs.srv import _get_pre_assembly_poses
            if _get_pre_assembly_poses.Metaclass_GetPreAssemblyPoses_Request._TYPE_SUPPORT is None:
                _get_pre_assembly_poses.Metaclass_GetPreAssemblyPoses_Request.__import_type_support__()
            if _get_pre_assembly_poses.Metaclass_GetPreAssemblyPoses_Response._TYPE_SUPPORT is None:
                _get_pre_assembly_poses.Metaclass_GetPreAssemblyPoses_Response.__import_type_support__()


class GetPreAssemblyPoses(metaclass=Metaclass_GetPreAssemblyPoses):
    from ariac_msgs.srv._get_pre_assembly_poses import GetPreAssemblyPoses_Request as Request
    from ariac_msgs.srv._get_pre_assembly_poses import GetPreAssemblyPoses_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
