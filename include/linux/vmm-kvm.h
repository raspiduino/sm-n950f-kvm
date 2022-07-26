/*
 * Copyright (C) 2022 Giang Vinh Loc.
 * Author: Giang Vinh Loc <giangvinhloc610@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

void vmm_init_kvm(phys_addr_t code, phys_addr_t boot_pgd_ptr, phys_addr_t pgd_ptr, unsigned long hyp_stack_ptr, unsigned long vector_ptr);
