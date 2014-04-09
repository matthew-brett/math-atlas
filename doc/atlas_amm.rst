#############################
Access major storage in ATLAS
#############################

ATLAS originally copied input GEMM matrices into block-major subblocks,
and tuned a block-major kernel for performance. Due to vectorization and
extreme-scale computing, ATLAS has been redesigned to copy to
access-major storage, with a new access-major kernel API. This paper
overviews ATLAS access-major matmul framework.

Introduction
============

Access-major kernel and related terminology
===========================================

All access-major kernels share a common interface, and perform
:math:`C \leftarrow A \times B + \beta C`, where
:math:`\beta = 0, 1, -1`.

Access-major storage
====================

Storage for :math:`C`
---------------------

:math:`M`-vectorized storage
----------------------------

Storage of :math:`A`
~~~~~~~~~~~~~~~~~~~~

Storage of :math:`B`
~~~~~~~~~~~~~~~~~~~~

:math:`K`-vectorized storage
----------------------------

Storage of :math:`A`
~~~~~~~~~~~~~~~~~~~~

Storage of :math:`B`
~~~~~~~~~~~~~~~~~~~~

Telling ATLAS to produce a user-specific AMM Kernel library
===========================================================

.. [1]
   rwhaley@users.sourceforge.net
