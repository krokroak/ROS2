# generated from rosidl_generator_py/resource/_idl.py.em
# with input from beagle_msgs:srv/Beagleposition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Beagleposition_Request(type):
    """Metaclass of message 'Beagleposition_Request'."""

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
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.srv.Beagleposition_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__beagleposition__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__beagleposition__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__beagleposition__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__beagleposition__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__beagleposition__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Beagleposition_Request(metaclass=Metaclass_Beagleposition_Request):
    """Message class 'Beagleposition_Request'."""

    __slots__ = [
        '_dice_label',
        '_user_fir',
        '_user_sec',
    ]

    _fields_and_field_types = {
        'dice_label': 'string',
        'user_fir': 'int64',
        'user_sec': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dice_label = kwargs.get('dice_label', str())
        self.user_fir = kwargs.get('user_fir', int())
        self.user_sec = kwargs.get('user_sec', int())

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
        if self.dice_label != other.dice_label:
            return False
        if self.user_fir != other.user_fir:
            return False
        if self.user_sec != other.user_sec:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def dice_label(self):
        """Message field 'dice_label'."""
        return self._dice_label

    @dice_label.setter
    def dice_label(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dice_label' field must be of type 'str'"
        self._dice_label = value

    @property
    def user_fir(self):
        """Message field 'user_fir'."""
        return self._user_fir

    @user_fir.setter
    def user_fir(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'user_fir' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'user_fir' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._user_fir = value

    @property
    def user_sec(self):
        """Message field 'user_sec'."""
        return self._user_sec

    @user_sec.setter
    def user_sec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'user_sec' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'user_sec' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._user_sec = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Beagleposition_Response(type):
    """Metaclass of message 'Beagleposition_Response'."""

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
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.srv.Beagleposition_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__beagleposition__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__beagleposition__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__beagleposition__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__beagleposition__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__beagleposition__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Beagleposition_Response(metaclass=Metaclass_Beagleposition_Response):
    """Message class 'Beagleposition_Response'."""

    __slots__ = [
        '_move_point',
        '_beagle_event',
        '_beagle_position',
    ]

    _fields_and_field_types = {
        'move_point': 'int64',
        'beagle_event': 'int32',
        'beagle_position': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.move_point = kwargs.get('move_point', int())
        self.beagle_event = kwargs.get('beagle_event', int())
        self.beagle_position = kwargs.get('beagle_position', int())

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
        if self.move_point != other.move_point:
            return False
        if self.beagle_event != other.beagle_event:
            return False
        if self.beagle_position != other.beagle_position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def move_point(self):
        """Message field 'move_point'."""
        return self._move_point

    @move_point.setter
    def move_point(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'move_point' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'move_point' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._move_point = value

    @property
    def beagle_event(self):
        """Message field 'beagle_event'."""
        return self._beagle_event

    @beagle_event.setter
    def beagle_event(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'beagle_event' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'beagle_event' field must be an integer in [-2147483648, 2147483647]"
        self._beagle_event = value

    @property
    def beagle_position(self):
        """Message field 'beagle_position'."""
        return self._beagle_position

    @beagle_position.setter
    def beagle_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'beagle_position' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'beagle_position' field must be an integer in [-2147483648, 2147483647]"
        self._beagle_position = value


class Metaclass_Beagleposition(type):
    """Metaclass of service 'Beagleposition'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('beagle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beagle_msgs.srv.Beagleposition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__beagleposition

            from beagle_msgs.srv import _beagleposition
            if _beagleposition.Metaclass_Beagleposition_Request._TYPE_SUPPORT is None:
                _beagleposition.Metaclass_Beagleposition_Request.__import_type_support__()
            if _beagleposition.Metaclass_Beagleposition_Response._TYPE_SUPPORT is None:
                _beagleposition.Metaclass_Beagleposition_Response.__import_type_support__()


class Beagleposition(metaclass=Metaclass_Beagleposition):
    from beagle_msgs.srv._beagleposition import Beagleposition_Request as Request
    from beagle_msgs.srv._beagleposition import Beagleposition_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
