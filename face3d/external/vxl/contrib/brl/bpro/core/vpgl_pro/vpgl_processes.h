#ifndef vpgl_processes_h_
#define vpgl_processes_h_

#include <bprb/bprb_macros.h>
#include <bprb/bprb_func_process.h>
#include <vil/vil_config.h> // for HAS_GEOTIFF definition

// execute and const functions
DECLARE_FUNC_CONS(vpgl_load_proj_camera_process);
DECLARE_FUNC_CONS(vpgl_load_local_rational_camera_process);
DECLARE_FUNC_CONS(vpgl_load_rational_camera_process);
DECLARE_FUNC_CONS(vpgl_load_rational_camera_nitf_process);
DECLARE_FUNC_CONS(vpgl_load_perspective_camera_process);
DECLARE_FUNC_CONS(vpgl_save_rational_camera_process);
DECLARE_FUNC_CONS(vpgl_save_perspective_camera_process);
DECLARE_FUNC_CONS(vpgl_nitf_camera_coverage_process);
DECLARE_FUNC_CONS(vpgl_create_local_rational_camera_process);
DECLARE_FUNC_CONS(vpgl_convert_to_local_rational_camera_process);
DECLARE_FUNC_CONS(vpgl_create_local_rational_camera_nitf_process);
DECLARE_FUNC_CONS(vpgl_projective_to_rational_camera_process);
DECLARE_FUNC_CONS(vpgl_correct_rational_camera_process);
DECLARE_FUNC_CONS(vpgl_create_perspective_camera_process);
DECLARE_FUNC_CONS(vpgl_save_perspective_camera_vrml_process);
DECLARE_FUNC_CONS(vpgl_save_perspective_cameras_vrml_process);
DECLARE_FUNC_CONS(vpgl_correct_rational_cameras_process);
DECLARE_FUNC_CONS(vpgl_correct_rational_cameras_mult_corr_process);
DECLARE_FUNC_CONS(vpgl_correct_rational_cameras_mult_corr_refine_process);
DECLARE_FUNC_CONS(vpgl_project_process);
DECLARE_FUNC_CONS(vpgl_convert_to_generic_camera_process);
DECLARE_FUNC_CONS(vpgl_convert_local_rational_to_generic_process);
DECLARE_FUNC_CONS(vpgl_resample_perspective_camera_process);
DECLARE_FUNC_CONS(vpgl_generate_3d_point_from_depth_process);
DECLARE_FUNC_CONS(vpgl_generate_xyz_from_depth_image_process);
DECLARE_FUNC_CONS(vpgl_get_view_direction_at_point_process);
DECLARE_FUNC_CONS(vpgl_get_rpc_offsets_process);
DECLARE_FUNC_CONS(vpgl_get_bounding_box_process);
DECLARE_FUNC_CONS(vpgl_nitf_footprint_process);
DECLARE_FUNC_CONS(vpgl_nitf_footprint_process2);
DECLARE_FUNC_CONS(vpgl_generate_3d_point_from_cams_process);
DECLARE_FUNC_CONS(vpgl_convert_to_local_coordinates_process);

DECLARE_FUNC_CONS(vpgl_perturb_persp_cam_orient_process);
DECLARE_FUNC_CONS(vpgl_rotate_persp_cam_process);
DECLARE_FUNC_CONS(vpgl_persp_cam_distance_process);
DECLARE_FUNC_CONS(vpgl_convert_to_generic_camera_w_margin_process);
DECLARE_FUNC_CONS(vpgl_compute_persp_cam_pa_covariance_process);
DECLARE_FUNC_CONS(vpgl_create_perspective_camera_process2);
DECLARE_FUNC_CONS(vpgl_get_perspective_cam_center_process);
#if HAS_GEOTIFF
DECLARE_FUNC_CONS(vpgl_create_geo_camera_process);
DECLARE_FUNC_CONS(vpgl_load_geo_camera_process);
DECLARE_FUNC_CONS(vpgl_find_connected_component_process);
DECLARE_FUNC_CONS(vpgl_create_dem_manager_process);
DECLARE_FUNC_CONS(vpgl_backproject_dem_process);
DECLARE_FUNC_CONS(vpgl_dem_image_projection_process);
#endif
DECLARE_FUNC_CONS(vpgl_create_perspective_camera_process3);
DECLARE_FUNC_CONS(vpgl_create_perspective_camera_process4);
DECLARE_FUNC_CONS(vpgl_create_perspective_camera_process5);
DECLARE_FUNC_CONS(vpgl_perturb_uniform_persp_cam_orient_process);
DECLARE_FUNC_CONS(vpgl_load_affine_camera_process);
DECLARE_FUNC_CONS(bpgl_transform_perspective_cameras_process);
DECLARE_FUNC_CONS(vpgl_transform_space_process);
DECLARE_FUNC_CONS(vpgl_transform_box_process);
DECLARE_FUNC_CONS(vpgl_geo_footprint_process);
DECLARE_FUNC_CONS(vpgl_geo_footprint_process2);
#if HAS_GEOTIFF
DECLARE_FUNC_CONS(vpgl_translate_geo_camera_process);
DECLARE_FUNC_CONS(vpgl_convert_geo_camera_to_generic_process);
DECLARE_FUNC_CONS(vpgl_convert_geotiff_to_point_cloud_process);
#endif
DECLARE_FUNC_CONS(vpgl_create_perspective_camera_from_kml_process);
DECLARE_FUNC_CONS(vpgl_convert_to_local_coordinates_process2);
DECLARE_FUNC_CONS(vpgl_load_perspective_camera_from_kml_file_process);
DECLARE_FUNC_CONS(vpgl_geo_cam_global_to_img_process);
DECLARE_FUNC_CONS(vpgl_geo_cam_img_to_global_process);
#if HAS_GEOTIFF
DECLARE_FUNC_CONS(vpgl_load_geo_camera_process2);
#endif
DECLARE_FUNC_CONS(vpgl_export_cameras_to_nvm_process);
DECLARE_FUNC_CONS(vpgl_create_lvcs_process);
DECLARE_FUNC_CONS(vpgl_convert_local_to_global_coordinates_process);
DECLARE_FUNC_CONS(vpgl_convert_local_to_global_coordinates_array_process);
DECLARE_FUNC_CONS(vpgl_convert_local_rational_to_perspective_process);
#if HAS_GEOTIFF
DECLARE_FUNC_CONS(vpgl_load_geo_camera_process3);
DECLARE_FUNC_CONS(vpgl_save_geo_camera_tfw_process);
#endif
DECLARE_FUNC_CONS(vpgl_interpolate_perspective_cameras_process);
DECLARE_FUNC_CONS(vpgl_load_lvcs_process);
DECLARE_FUNC_CONS(vpgl_save_lvcs_process);
DECLARE_FUNC_CONS(vpgl_create_and_save_lvcs_process);
DECLARE_FUNC_CONS(vpgl_get_rational_camera_offsets_process);
DECLARE_FUNC_CONS(vpgl_write_generic_camera_process);
DECLARE_FUNC_CONS(vpgl_compute_affine_from_rat_process);
DECLARE_FUNC_CONS(vpgl_affine_rectify_images_process);
DECLARE_FUNC_CONS(vpgl_save_projective_camera_process);
DECLARE_FUNC_CONS(vpgl_affine_rectify_images_process2);
DECLARE_FUNC_CONS(vpgl_crop_img_using_3d_box_process);
DECLARE_FUNC_CONS(vpgl_crop_img_using_3d_box_dem_process);
DECLARE_FUNC_CONS(vpgl_offset_cam_using_3d_box_process);
DECLARE_FUNC_CONS(vpgl_compute_utm_zone_process);
DECLARE_FUNC_CONS(vpgl_rational_cam_img_to_global_process);
DECLARE_FUNC_CONS(vpgl_get_backproject_ray_process);
DECLARE_FUNC_CONS(vpgl_get_rpc_backproject_ray_process);
DECLARE_FUNC_CONS(vpgl_construct_height_map_process);
DECLARE_FUNC_CONS(vpgl_construct_disparity_map_process);
DECLARE_FUNC_CONS(vpgl_rational_cam_nadirness_process);
DECLARE_FUNC_CONS(vpgl_rational_cam_rotation_to_north_process);
DECLARE_FUNC_CONS(vpgl_rational_cam_rotation_to_up_vector_process);
DECLARE_FUNC_CONS(vpgl_compute_image_to_world_homography_process);
DECLARE_FUNC_CONS(vpgl_crop_ortho_using_3d_box_process);
#if HAS_GEOTIFF
DECLARE_FUNC_CONS(vpgl_convert_non_nadir_geo_camera_to_generic_process);
#endif
DECLARE_FUNC_CONS(vpgl_get_generic_camera_ray_process);
DECLARE_FUNC_CONS(vpgl_persp_cam_from_photo_overlay_process);
DECLARE_FUNC_CONS(vpgl_affine_f_matrix_process);
DECLARE_FUNC_CONS(vpgl_load_rational_camera_from_txt_process);

DECLARE_FUNC_CONS(vpgl_isfm_rational_camera_process);
#if HAS_GEOTIFF
DECLARE_FUNC_CONS(vpgl_isfm_rational_camera_seed_process);
DECLARE_FUNC_CONS(vpgl_isfm_rational_camera_with_initial_process);
#endif

#endif